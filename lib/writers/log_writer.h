#pragma once

#include <string>
#include "log_level.h"
#include "log_formatter.h"

namespace SimpleLogger {

    class LogWriter {
        private:
            LogLevel logLevel;
            LogFormatter * formatter;

        public:
            LogWriter(LogLevel level=logINFO);
            LogWriter(LogFormatter * formatter, LogLevel level=logINFO);
            virtual ~LogWriter(void);

        public:
            void set_log_level(LogLevel level);
            void register_formatter(LogFormatter * formatter);
            void log(std::string timestamp, std::string message, LogLevel level);

        public:
            virtual void write_log_message(std::string formattedMessage) = 0;

    };

};
