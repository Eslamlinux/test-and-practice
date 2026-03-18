#include <iostream>
#include <string>

/*

The word i18n is a common abbreviation of internationalization in the developer community, used instead of typing the whole word and trying to spell it correctly. Similarly, a11y is an abbreviation of accessibility.

Write a function that takes a string and turns any and all "words" (see below) within that string of length 4 or greater into an abbreviation, following these rules:

A "word" is a sequence of alphabetical characters. By this definition, any other character like a space or hyphen (eg. "elephant-ride") will split up a series of letters into two words (eg. "elephant" and "ride").
The abbreviated version of the word should have the first letter, then the number of removed characters, then the last letter (eg. "elephant ride" => "e6t r2e").
Example
 input: "elephant-rides are really fun!"
          ^^^^^^^^*^^^^^*^^^*^^^^^^*^^^*
 words (^):   "elephant" "rides" "are" "really" "fun"
                123456     123     1     1234     1
 ignore short words:               X              X

 abbreviate:    "e6t"     "r3s"  "are"  "r4y"   "fun"
 all non-word characters (*) remain in place
                     "-"      " "    " "     " "     "!"
output: "e6t-r3s are r4y fun!"  
*/


std::string abbreviate(std::string sentence) {
    std::string Result ,Word ,F_Word , L_word;
    int Count = sentence.size();
    if(Count < 4) return sentence;
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
                Count = Word.size() - 2;
                F_Word = Word[0];
                L_word = Word[Word.size() - 1];
                Result += F_Word + std::to_string(Count) + L_word;
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
                Count = Word.size() - 2;
                F_Word = Word[0];
                L_word = Word[Word.size() - 1];
                Result += F_Word + std::to_string(Count) + L_word;
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

    return 0;
}