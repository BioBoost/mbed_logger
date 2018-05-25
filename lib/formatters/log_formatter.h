#pragma once

#include "log_level.h"
#include <string>

namespace SimpleLogger {

    class LogFormatter {

        public:
            virtual ~LogFormatter(void);

        public:
            virtual std::string format_message(std::string timestamp, std::string message, LogLevel level);

    };

};
