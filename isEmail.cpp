#include <iostream>
#include <string>

bool isA_D(char ch)
{
    return isalpha(ch) || isdigit(ch);
}

bool isEmail(std::string email) 
{
    if(!isA_D(email[0]) )
    return false;

    int repat = 0, repdot = 0;

    for(int i = 0 ; i < email.length(); i++)
    {
        if(email[i] == '@')
        {
            repat++;
            if(email[i-1] == '-' || email[i-1] == '_' || email[i-1] =='.')
            {
                continue;
            }
            if(!isA_D(email[i-1]) || !isA_D(email[i+1]))
            {
                return false;
            }
        }
        if(email[i] == '.')
        {
            repdot++;
            if(!isA_D(email[i+1]) || !isA_D(email[i+2]))
            return false;
        }

    }
    if(repat > 1 || repat == 0 || repdot ==0)
    return false;
    return true;
}


int main()
{
    std::cout << isEmail("example_@example.com") << std::endl; // true
    std::cout << isEmail("example@example.c") << std::endl; // false
    std::cout << isEmail("example@com") << std::endl; // false
    std::cout << isEmail("@example.com") << std::endl; // false

    // std::cout << "is a d " << isA_D('l') << std::endl;
    return 0;
}