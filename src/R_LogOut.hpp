#ifndef R_LOGOUT_HPP
#define R_LOGOUT_HPP
#include <iostream>
#include <windows.h>


class R_Log
{

public:
    enum LogVariants
    {
        STANDARD = 15,
        INFO = 2,
        DEBUG = 11,
        WARN = 14,
        ERR = 4
    };

    static R_Log& RLog();

    template<class valueLogType>
    R_Log& Out(valueLogType valueToLogging, LogVariants varLog = STANDARD)
    {
        if (m_callLogNum == 0)
        {
            StartLogTitle();
        }

        SetConsoleTextAttribute( m_hConsole, static_cast<int>(varLog));
        std::cout<<"["<< m_callLogNum<<"][" << GetLogType(varLog)<<"] " << valueToLogging <<std::endl;
        SetConsoleTextAttribute( m_hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
        ++m_callLogNum;
        return *this;
    }

    void ClearLoggingCounter();

private:
    R_Log();
    ~R_Log();
    const char *GetLogType(const LogVariants varLog);
    void StartLogTitle();
    void EndLogTitle();
    HANDLE m_hConsole;
    static unsigned int m_callLogNum;
};

#endif
