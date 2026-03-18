#include <iostream>
#include <string>
#include <bits/stdc++.h>

int count_char(std::string sentence,std::string ch) { 
    // return sentence.find(ch)+1; work only with <bits/stdc++.h>
    std::size_t found = sentence.find(ch);
    return found +  1;
}
int main()
{
    std::cout << count_char("innovate","n") << std::endl;
    std::cout << count_char("challenges","z") << std::endl;
    std::cout << count_char("business","s") << std::endl;
    std::cout << count_char("day","d") << std::endl;
}