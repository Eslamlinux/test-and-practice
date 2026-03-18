#include <iostream>
#include <println>

int main()
{
    char S ='S' ^3,A= 'A',U = 'U',D= 'D',I='I',R='R',B='B';
    std::cout << "\'HELLO\' \\\a\\// \"Eslam\"" << std::endl;
    std::cout << "\'HELLO\' //\\\a\\ \"Eslam\""<< std::endl;
    wchar_t e = L'إ';
    std::wstring s = L"إسلام";
    std::wcout << (int)e << std::endl;
    std::wcout << s << std::endl;
    std::wcout << sizeof(e) << std::endl;


    std::wcout << s;
}