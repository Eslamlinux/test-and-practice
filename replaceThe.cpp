#include <iostream>
using namespace std;

// a, e, i, o, u
string replaceThe(string txt) { 
    std::string result;
    int po = txt.find("the");
        if(txt.find("the")&& txt[po +4] == 'a' || txt[po +4] == 'e'|| txt[po +4] == 'i'
                        || txt[po +4] == 'o' || txt[po +4] == 'u')
        txt.replace(txt.find("the"),3,"an");
        else
        txt.replace(txt.find("the"),3,"a");
    return txt;
}
int main()
{
 std::cout << replaceThe("Here is the plan") << std::endl;
 std::cout << replaceThe("I ate the apple") << std::endl;
 std::cout << replaceThe("I go to the mall") << std::endl;
 std::cout << replaceThe("I want the orange") << std::endl;
    return 0;
}