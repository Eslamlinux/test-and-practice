#include <iostream>
#include <string>
#include <utility>

std::string encode(const std::string &str) {
    std::string result = "";
    std::string vowels = "aeiou"; 
    std::pair<char, char> vowel_pairs[] = {
        {'a', '1'},
        {'e', '2'},
        {'i', '3'},
        {'o', '4'},
        {'u', '5'}
    };
    for(int i = 0; i < str.size(); i++) {
        bool is_vowel = false;
        for(auto &pair : vowel_pairs){
            if(tolower(str[i]) == pair.first) {
                result += pair.second;
                is_vowel = true;
                break;
            }
        }
        if(!is_vowel) 
            result += str[i];
    }

  return result;
}

std::string decode(const std::string &str) {
std::string result = "";
    std::pair<char, char> vowel_pairs[] = {
        {'a', '1'},
        {'e', '2'},
        {'i', '3'},
        {'o', '4'},
        {'u', '5'}
    };
    for(int i = 0 ; i < str.size(); i++)
    {
        bool is_number = false; 
        for(auto &pair : vowel_pairs)
        {
            if(str[i] == pair.second){
                result += pair.first;
                is_number = true;
                break;
            }
        }
        if(!is_number)
            result += str[i];
    }
    return result;
}

int main()
{


std::cout << encode("hEllo") << std::endl;
std::cout << decode("h2ll4") << std::endl;

    return 0;
}

