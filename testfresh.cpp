#include <iostream>
namespace STD
{
    void println(std::string str)
    {
     std::cout << str << std::endl;   
    }
}

class oh_no
{
    oh_no()
    {
        std::cout << "oh no bugssss\n";
        }
    
    oh_no(){
        std::cout << "exit\n";
        }
    }

struct oh_yes
{
    oh_yes(){
        std::cout << "looks bad\n";
        }
    }
    
int main()
{
    std::cout << "Hello fresh Editor\n";
    using namespace STD;
    
    println("hello fresh\n");
    println("frsh have a bug :(");
    
        
    
}