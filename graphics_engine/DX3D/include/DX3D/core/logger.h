#pragma once

namespace dx3d
{
    class logger final
    {
    public:
        enum class logLevel
        {
            Error = 0,
            Warning,
            Info
        };

        explicit logger(logLevel logLevel = logLevel::Error);
        void log(logLevel level, const char* message) const;
    private:
        logLevel m_logLevel = logLevel::Error;
    };

#define DX3DLogInfo(message) {\
    getLogger().log((logger::logLevel::Info), message); }

#define DX3DLogWarning(message) {\
    getLogger().log((logger::logLevel::Warning), message); }

#define DX3DLogError(message) {\
    getLogger().log((logger::logLevel::Error), message); }

#define DX3DLogErrorAndThrow(message) {\
    DX3DLogError(message);\
    throw std::runtime_error(message); }
}
