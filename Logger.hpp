#ifndef LOGGER_HPP
#define LOGGER_HPP

//*******************************************************************************

#include <string>
#include <vector>
#include <fstream>
#include <FILE>

//*******************************************************************************

class Logger {
private:
    char* programName;
    std::vector<char*> logs;

public:
    Logger() = delete;
    Logger(const Logger&) = delete;
    Logger(Logger&&) = delete;

    Logger(const std::string& progName = "", const bool logToConsole = true);
    ~Logger();

    bool log();
    bool logDateTime();
    bool logAction();
    bool logError();
    bool addLogFile(const std::string& fileName);
    bool deleteLogFile(const std::string& fileName);

};

#endif