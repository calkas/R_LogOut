#include "R_LogOut.hpp"
#include <iostream>

unsigned int R_Log::m_callLogNum = 0;


R_Log::R_Log()
{
}

R_Log::~R_Log()
{
    EndLogTitle();
}

R_Log& R_Log::RLog()
{
    static R_Log rLogObj;
    return rLogObj;
}

const char *R_Log::GetLogType(const LogVariants varLog)
{
    switch (varLog)
    {
        case LogVariants::INFO:
            return "INFO";
        case LogVariants::DEBUG:
            return "DEBUG";
        case LogVariants::WARN:
            return "WARNNING";
        case LogVariants::ERR:
            return "ERROR";
        default:
            return "OUT";
    }
}

void R_Log::ClearLoggingCounter()
{
    m_callLogNum = 0;
}

void R_Log::StartLogTitle()
{
    m_hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(m_hConsole, 79);
    std::cout << "   .:: Start of R_LogOut Console ::.     \n" << std::endl;
    SetConsoleTextAttribute(m_hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}

void R_Log::EndLogTitle()
{
    m_hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(m_hConsole, 79);
    std::cout << "\n\n.:: End of R_LogOut Console ::. \n            BYE BYE !           \n" << std::endl;
    SetConsoleTextAttribute(m_hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}

