#include "logger.h"
#include <ctime>

#include "null_log_writer.h"

namespace SimpleLogger {

    Logger& Logger::get_instance() {
        static Logger instance;   // Guaranteed to be destroyed.
        return instance;
    }

    Logger::Logger(void) {
        writer = new NullLogWriter();
    }

    Logger::~Logger(void) {
        delete writer;
    }

    void Logger::register_writer(LogWriter * writer) {
        delete this->writer;
        this->writer = writer;
    }

    void Logger::verbose(std::string message) {
        log(message, logVERBOSE);
    }

    void Logger::info(std::string message) {
        log(message, logINFO);
    }

    void Logger::debug(std::string message) {
        log(message, logDEBUG);
    }

    void Logger::warning(std::string message) {
        log(message, logWARNING);
    }

    void Logger::error(std::string message) {
        log(message, logERROR);
    }

    void Logger::log(std::string message, LogLevel level) {
        writer->log(get_current_timestamp(), message, level);
    }

    std::string Logger::get_current_timestamp(void) {
        time_t seconds = time(NULL);
        char buffer[80];
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localtime(&seconds));
        return std::string(buffer);
    }

};
