#pragma once

#include <string>
#include "log_writer.h"
#include "log_level.h"

#define Log SimpleLogger::Logger::get_instance()

namespace SimpleLogger {

    class Logger final {

        private:
            LogWriter * writer;

        public:
            static Logger& get_instance();

        private:
            Logger(void);   // Make constructor private
            ~Logger(void);

        public:
            void register_writer(LogWriter * writer);

        public:
            void verbose(std::string message);
            void info(std::string message);
            void debug(std::string message);
            void warning(std::string message);
            void error(std::string message);

        private:
            void log(std::string message, LogLevel level);
            std::string get_current_timestamp(void);

        // Dont forget to declare these two. You want to make sure they
        // are unacceptable otherwise you may accidentally get copies of
        // your singleton appearing.
        public:
            Logger(Logger const&)          = delete;
            void operator=(Logger const&)  = delete;
            // Note: Scott Meyers mentions in his Effective Modern
            //       C++ book, that deleted functions should generally
            //       be public as it results in better error messages
            //       due to the compilers behavior to check accessibility
            //       before deleted status

    };
};
