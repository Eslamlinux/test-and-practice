#include <iostream>
#include <string>
#include <cctype>



bool isNumber(std::string s) {
    bool seenDigit = false;
    bool seenDot = false;
    bool seenE = false;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (isdigit(c)) {
            seenDigit = true;
        } 
        else if (c == '+' || c == '-') {
            if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') return false;
        } 
        else if (c == '.') {
            if (seenDot || seenE) return false;
            seenDot = true;
        } 
        else if (c == 'e' || c == 'E') {
            if (seenE || !seenDigit) return false;
            seenE = true;
            seenDigit = false;
        } 
        else {
            return false;
        }
    }

    return seenDigit;
}


int main()
{
    std::cout << isNumber("53.5e93") <<std::endl;
    std::cout << isNumber("53.5e9.3") <<std::endl;
    std::cout << isNumber("abc") <<std::endl;

    return 0;
}