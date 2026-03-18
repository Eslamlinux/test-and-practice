#include <iostream>
#include <string>

std::string longestAlternatingSubstring(std::string digits) { 
    std::string temp ,result ="";
    for(int i =1; i < digits.length();i++)
    {
        if(i == 1)
        temp = digits[0]; 

        if((digits[i] -'0') %2 != (temp[temp.size()-1] -'0') %2)
        {
                temp += digits[i];
        }
        else
        {
            if(temp.size() > result.size())
            {
                result = temp;
            }
            temp = digits[i];
        }
    }
    return result;
}

int main()
{
    std::cout << longestAlternatingSubstring("2105787220351146") << std::endl;
    return 0; 
}