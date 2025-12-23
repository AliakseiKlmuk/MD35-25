
#include <iostream>
#include <windows.h>
//#include <sysinfoapi.h>
//#include <winnt.h>

int main()
{
    OSVERSIONINFO osver;
    osver.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionExW(&osver);

      std::cout << "Windows version: " << osver.dwMajorVersion << std::endl;
      std::cout << " " << osver.dwMinorVersion << std::endl;
      std::cout << "Build number:  " << osver.dwBuildNumber << std::endl;
      std::cout << " " << osver.dwPlatformId << std::endl;

    
     

}




    


