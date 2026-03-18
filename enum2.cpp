#include <iostream>
enum protocols{www,http,https,web,httpss};


int main()
{
    std::cout << "==========================================\n" ;
    std::cout << "enter the protocol\n" ;
    std::cout << "------------------\n" ;
    std::cout << "www [0] \t http [1] \t https [2] \nweb [3] \t httpss [4]" << std::endl ;
    std::cout << "==========================================\n" ;
    int entry ;
    std::cin >> entry;
    protocols proto = (protocols)entry;

    switch(proto)
    {
        case protocols::www :
        std::cout << "www.website.com\n";
        break;
        case protocols::http:
        std::cout << "http.website.com\n";
        break;
        case protocols::https:
        std::cout << "https.website.com\n";
        break;
        case protocols::httpss:
        std::cout << "httpss.website.com\n";
        break;
        case protocols::web:
        std::cout << "web.website.com\n";
    }



}