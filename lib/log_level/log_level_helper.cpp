#include "log_level_helper.h"

namespace SimpleLogger {

    std::string LogLevelHelper::level_to_string(LogLevel level) {
        static std::string levelStrings[] = {
            "verbose", "info", "debug", "warning", "error"
        };

        return levelStrings[level];
    }

};
