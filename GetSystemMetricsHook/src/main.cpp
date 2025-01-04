#include "pch.h"
#include "logger.h"
#include "settings.h"
#include "version_info.h"

// https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getsystemmetrics
static int(WINAPI* _GetSystemMetrics)(int nIndex) = GetSystemMetrics;

int WINAPI HK_GetSystemMetrics(int nIndex)
{
    // Get the user-defined flag
    auto result = Settings::GetByFlag(nIndex);

    // Check if the flag is undefined
    if (Settings::IsUndefined(result))
    {
        // Runs the original function
        return _GetSystemMetrics(nIndex);
    }

    // Returns the user-defined flag
    return result;
}

// Detouring
BOOL Commit()
{
    auto result = DetourTransactionCommit();

    switch (result)
    {
    case NO_ERROR:
        return TRUE;
    case ERROR_INVALID_DATA:
        spdlog::error("DetourTransactionCommit returned ERROR_INVALID_DATA.");
        return FALSE;
    case ERROR_INVALID_OPERATION:
        spdlog::error("DetourTransactionCommit returned ERROR_INVALID_OPERATION.");
        return FALSE;
    default:
        spdlog::error("DetourTransactionCommit returned an unknown error.");
        return FALSE;
    }
}

void Attach()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)_GetSystemMetrics, HK_GetSystemMetrics);

    if (Commit())
    {
        spdlog::info("GetSystemMetrics hook attached.");
    }
}

void Detach()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)_GetSystemMetrics, HK_GetSystemMetrics);

    if (Commit())
    {
        spdlog::info("GetSystemMetrics hook detached.");
    }
}

void Init()
{
    Logger::Init();

    spdlog::info("GetSystemMetricsHook {} initialized.", APP_PRODUCT_VERSION_A);

    if (Settings::Load())
    {
        Settings::Describe();

        Attach();
    }
    else
    {
        spdlog::warn("Failed to load settings. Hook will not be applied.");
    }
}

// Entry
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Init();
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        Detach();
        break;
    }

    return TRUE;
}
