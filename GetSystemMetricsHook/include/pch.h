#pragma once

#define WIN32_LEAN_AND_MEAN
#define FMT_HEADER_ONLY

// Windows
#include <Windows.h>

// Deps
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <toml++/toml.hpp>
#include <detours/detours.h>
