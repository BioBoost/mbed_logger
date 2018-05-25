#pragma once

#include "log_level.h"
#include <string>

namespace SimpleLogger {

    class LogLevelHelper {

        public:
            static std::string level_to_string(LogLevel level);

    };

};
