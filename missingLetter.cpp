//missingLetter

#include <iostream>

std::string missingLetter(std::string txt) { 
    std::string result = "No Missing Letter";
    for(int i = 0 ; i < txt.length() -1; i++)
    {
        if(txt[i] +1 != txt[i+1])
        {
            result = txt[i] + 1;
            break;
        }
    }
    return result;
}

int main()
{
    std::cout << missingLetter("rsuv") << std::endl; // t


    return 0;
}