#pragma once

#include <string>
#include "log_writer.h"

namespace SimpleLogger {

  class NullLogWriter : public LogWriter {

    public:
        NullLogWriter(LogLevel level=logINFO)
            : LogWriter(level) { }

        virtual ~NullLogWriter(void) { };

    public:
        virtual void write_log_message(std::string formattedMessage) override { }

  };

};
