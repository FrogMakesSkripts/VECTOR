#include <DX3D/core/logger.h>
#include <iostream>

dx3d::logger::logger(logLevel logLevel) : m_logLevel(logLevel)
{
    std::clog << "V.E.C.T.O.R | 3D AI World Simulation\n";
    std::clog << "------------------------------------\n";
}

void dx3d::logger::log(logLevel level, const char* message) const
{
    auto logLevelToString = [](logLevel level) {
        switch (level) {
            case logLevel::Error: return "Error";
            case logLevel::Warning: return "Warning";
            case logLevel::Info: return "Info";
            default: return "Unknown";
        }
    };


    if (level > m_logLevel) return;
    std::clog << "[DX3D " << logLevelToString(level) << "]: " << message << '\n';
}