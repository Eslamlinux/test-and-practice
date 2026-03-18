#include <iostream>
#include <string>
#include <sstream>

int main()
{
     int a = 5, b = 4;
     int result  = a + b;
     std::stringstream ss;
     ss << a << " + " <<  b << " = " << result;      
     std::string top;
     //std::cout << top;
     
    //  while(ss >> top)
    //  {
    //      std::cout << top << " \n";
    //      }
     
    //  getline(ss,top);
    //  std::cout << top ;
     
    ss.str("");
    ss.clear();
    top = ss.str();
     std::cout << top ;
    std::string nums ;

    std::stringstream strstr;
    strstr <<  "10,20,30,40";

    
    while(getline(strstr,nums, ','))
    std::cout << nums; 
    
     return 0;   
}