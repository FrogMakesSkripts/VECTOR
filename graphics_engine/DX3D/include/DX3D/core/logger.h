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
}
