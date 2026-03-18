#include "string_to_int/to_int.h"
#include <iostream>
std::string abbreviate(std::string sentence) {
    std::string Result ,Word ,F_Word , L_word,Count;
    Count = std::to_string(sentence.size());
    if(to_int(Count) < 4) return sentence;

    for(int i = 0; i < sentence.size(); i++)
    {
        if(isalpha(sentence[i]))
        {
            Word += sentence[i];
        }
        else
        {
            if(Word.size() > 3)
            {
                Count = std::to_string(Word.size() - 2);
                F_Word = Word[0];
                L_word = Word[Word.size() - 1];
                Result += F_Word + Count + L_word;
            }
            else
            {
                Result += Word;
            }
            Result += sentence[i];
            Word = "";
        }
        if(!Word.empty() && i == sentence.size() - 1)
        {
            if(Word.size() > 3)
            {
                Count = std::to_string(Word.size() - 2);
                F_Word = Word[0];
                L_word = Word[Word.size() - 1];
                Result += F_Word + Count + L_word;
            }
            else
            {
                Result += Word;
            }
        }
    }


  return Result ;
}

int main() {

std::cout << abbreviate("internationalization") << std::endl; // i18n
std::cout << abbreviate("accessibility") << std::endl; // a11y
std::cout << abbreviate("elephant rides are really fun!") << std::endl; // e6t r3s are r4y fun!
std::cout << abbreviate("elephant-ride") << std::endl; // e6t
std::cout << abbreviate("sits") << std::endl; // s2s

// std::string test1 = "1internation98444alization";

// std::cout << to_int(test1) << std::endl; // i18n
    return 0;
}