#pragma once

#include <string>
#include "log_writer.h"

namespace SimpleLogger {

  class TerminalLogWriter : public LogWriter {

    public:
        TerminalLogWriter(LogLevel level=logINFO)
            : LogWriter(level) { }

        TerminalLogWriter(LogFormatter * formatter, LogLevel level=logINFO)
            : LogWriter(formatter, level) { }

        virtual ~TerminalLogWriter(void) { };

    public:
        virtual void write_log_message(std::string formattedMessage) override {
            printf("%s\r\n", formattedMessage.c_str());
        }

  };

};
