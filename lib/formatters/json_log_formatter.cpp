#include "json_log_formatter.h"
#include "log_level_helper.h"

namespace SimpleLogger {

    JsonLogFormatter::~JsonLogFormatter(void) { }

    std::string JsonLogFormatter::format_message(std::string timestamp, std::string message, LogLevel level) {
        return "{\"timestamp\": \"" + timestamp + "\", "
            + "\"severity\": \"" + LogLevelHelper::level_to_string(level) + "\", "
            + "\"message\": \"" + message + "\"}";
    }

};