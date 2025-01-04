#include "pch.h"
#include "logger.h"

void Logger::Init()
{
    spdlog::set_default_logger(
        spdlog::basic_logger_mt("root", "GetSystemMetricsHook.log", true)
    );

    spdlog::set_level(spdlog::level::debug);

    spdlog::flush_on(spdlog::level::info);

    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] %l: %v");
}
