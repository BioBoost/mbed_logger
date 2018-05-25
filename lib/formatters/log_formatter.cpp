#include "log_formatter.h"
#include "log_level_helper.h"

namespace SimpleLogger {

    LogFormatter::~LogFormatter(void) { }

    std::string LogFormatter::format_message(std::string timestamp, std::string message, LogLevel level) {
        return timestamp + " [" + LogLevelHelper::level_to_string(level) + "] " + message;
    }

};