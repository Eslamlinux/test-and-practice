#include <iostream>

#define Error 0


int main()
{
    
    #ifdef __linux__
    std::cout << "linux on\n";
        #if Error == 1
        std::cout << "Status: Error\n";
        #else
        std::cout << "Status: Healthy\n";
        #endif

    std::cout << "=== youre distro info ===\n";
    std::cout << system("lsb_release -a");
    std::cout <<std::endl;
    std::cout << "=== youre sys info ===\n";
    std::cout << system("uname -a");
    std::cout <<std::endl;
    std::cout << "=== youre user info ===\n";
    std::cout << system("id");
    std::cout <<std::endl;
    
    
    #elif defined(_WIN32) || defined(_WIN64)
    std::cout << "win on\n";

    
    #else
    std::cout << "othe sys\n";

    #endif

    // #ifndef Error
    // #define Error 1
    // #endif


    return 0;
}