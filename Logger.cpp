#include "Logger.hpp"

//*******************************************************************************

#include <cstdio>
#include <cstring>
using namespace std;

//*******************************************************************************

Logger::Logger(const string& progName) {
    programName = new char[progName.length() + 1];
    strcpy_s(programName, progName.length() + 1, progName.c_str());
    
    printf("LOGGER running for program \"%s\"\n", programName);
}

//*******************************************************************************

Logger::~Logger() {
    delete[] programName;
    programName = nullptr;
    
    printf("Closing LOGGER for program \"%s\"\n", programName);
}

Logger::addLogFile(const string& fileName) {
    
}
