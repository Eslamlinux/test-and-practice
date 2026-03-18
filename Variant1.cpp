#include <iostream>
#include <variant>
#include <string>

std::variant<std::string,char, int,double> func(std::string str)
{
    if(str == "st")
    return  "hello this is string return";
    else if(str == "in")
    return 123456;
    else if(str == "fl")
    return 1.22;
    else if(str == "do")
    return 1.23456;
    else return 1;

    // return str == "st" ? "hello this is string return" :
    //        str == "in" ? 123456 :
    //        str == "fl" ? 1.4 : 1.23456 ;
}

int main()
{
    // std::variant<std::string,int> v1;
    // v1 = "hello";
    // v1 = 5;
    // if(std::get_if<std::string>(&v1))
    // std::cout << std::get<std::string>(v1) << std::endl;
    // else
    // std::cout << std::get<int>(v1) << std::endl;

        std::cout<< std::get<std::string>(func("st")) <<std::endl;
        std::cout<< std::get<int>(func("in")) <<std::endl;
        std::cout<< std::get<double>(func("fl")) <<std::endl;
        std::cout<< std::get<double>(func("do")) <<std::endl;
        std::cout<< "hi \'n\' hi" <<std::endl;
        std::cout<< "\n";

        std::variant<int,std::string,double,char> a[6];
        a[0] ={10};
        a[1] = {"hello"};
        a[2] = {'M'};
        a[3] = {"eslam"};
        a[4] = {2.1};
        a[5] = {"khalid"};
        // size_t vsize = sizeof(sizeof(a)/sizeof(a[0]));
        // std::cout << "variant array size: " << vsize << std::endl;
        for(int i = 0; i < 6;i++)
        {
            std::visit([](const auto& val){std::cout <<val <<std::endl;},a[i]);
        }
    

    return 0;
}