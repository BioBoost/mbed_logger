#pragma once

#include "log_formatter.h"
#include "log_level.h"
#include <string>

namespace SimpleLogger {

    class JsonLogFormatter : public LogFormatter {

        public:
            virtual ~JsonLogFormatter(void);

        public:
            virtual std::string format_message(std::string timestamp, std::string message, LogLevel level) override;

    };

};
