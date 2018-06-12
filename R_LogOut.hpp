#ifndef R_LOGOUT_HPP
#define R_LOGOUT_HPP
#include <iostream>
#include <windows.h>

/*
    Name: R_LogOut
    Copyright:
    Author: Piotr
    Date: 14-02-18 10:04
    Description: Own LogOut console
*/


class R_LogOut
{
public:
    R_LogOut()
    {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute( hConsole, 79 );
        std::cout<<"   .:: R_LogOut Console ::.     "<<std::endl;
        std::cout<<"--------------------------------\n\n"<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    ~R_LogOut()
    {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute( hConsole, 79 );
        std::cout<<"\n\n.:: End of R_LogOut Console ::. \n            BYE BYE !           \n"<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    template<class T>
    void Out(T log)
    {
        SetConsoleTextAttribute( hConsole, 15 );
        std::cout<<log<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    template<class T>
    void Info(T log)
    {
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN );
        std::cout<<"[INFO] "<<log<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    template<class U>
    void Warn(U log)
    {
        SetConsoleTextAttribute( hConsole, 14);
        std::cout<<"[WARN] "<<log<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    template<class N>
    void Error(N log)
    {
        SetConsoleTextAttribute( hConsole, FOREGROUND_RED );
        std::cout<<"[ERROR] "<<log<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

    template<class N>
    void Debug(N log)
    {
        SetConsoleTextAttribute( hConsole, 11 );
        std::cout<<"[DEBUG] "<<log<<std::endl;
        SetConsoleTextAttribute( hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
    }

private:
    HANDLE hConsole;
protected:

};

#endif
