#include "log_writer.h"

namespace SimpleLogger {

    LogWriter::LogWriter(LogLevel level)
        : LogWriter(new LogFormatter(), level) {
    }

    LogWriter::LogWriter(LogFormatter * formatter, LogLevel level) {
        set_log_level(level);
        this->formatter = formatter;
    }

    LogWriter::~LogWriter(void) {
        delete formatter;
    }

    void LogWriter::set_log_level(LogLevel level) {
        this->logLevel = level;
    }

    void LogWriter::register_formatter(LogFormatter * formatter) {
        delete this->formatter;
        this->formatter = formatter;
    }

    void LogWriter::log(std::string timestamp, std::string message, LogLevel level) {
        if (level >= logLevel) {
            write_log_message(formatter->format_message(timestamp, message, level));
        }
    }

};