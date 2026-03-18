//remove Repeated Words
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

std::string Word_To_Lower(std::string Tword)
{
    std::transform(Tword.begin(),Tword.end(),Tword.begin(), ::tolower);
    return Tword;
}
std::string removeRepeatedWords(std::string sentence) { 
    std::vector<std::string> words;
    std::string temp, result;
    for(int i =0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            temp += sentence[i];
        }
        else
        {
            for(int t =0; t < words.size();t++)
            {
                if(Word_To_Lower(temp) == Word_To_Lower(words[t]))
                {
                    temp = "";
                    break;
                }
            }
            if(!temp.empty())
            words.push_back(temp);
            temp = "";
        }
    }
    if(!temp.empty())
    {
            for(int t =0; t < words.size();t++)
            {
                if(Word_To_Lower(temp) == Word_To_Lower(words[t]))
                {
                    temp = "";
                    break;
                }
            }
            if(!temp.empty())
            words.push_back(temp);
    }
    for(std::string c : words)
    {
        result += c +' ';
    }
    result.pop_back();
    return result;
}
int main()
{
    std::cout<< removeRepeatedWords("Goodbye bye Bye world WorlD woRld") << std::endl;
    std::cout<< removeRepeatedWords("Sam went went to to to his business") << std::endl;
    std::cout<< removeRepeatedWords("Reya is is the the best player in eye eye game") << std::endl;
    std::cout<< removeRepeatedWords("in inthe") << std::endl;
}