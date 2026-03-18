/*
Given a string of arbitrary length with any ascii characters. Write a function to determine whether the string contains the whole word "English".

The order of characters is important -- a string "abcEnglishdef" is correct but "abcnEglishsef" is not correct.

Upper or lower case letter does not matter -- "eNglisH" is also correct.

Return value as boolean values, true for the string to contains "English", false for it does not.

*/

#include <iostream>
#include <string>
#include <algorithm>

bool sp_eng(const std::string& sentence) {
    std::string tolow = sentence ;
    std::transform(tolow.begin(),tolow.end(),tolow.begin(),[](unsigned char c){return std::tolower(c);});
    size_t low = tolow.find("english");
    return low != std::string::npos;
}

int main() {
    std::cout << sp_eng("1234#$%%eNglish ;k9/") << std::endl;
    std::cout << "1234\"" << std::endl;
    return 0;
}
