#include <iostream>

int search(std::string word,std::string character) { 
    for(int i = 0; i < word.length(); i++)
    {
        if(character[0] == word[i])
        return i;
    }
return -1;
}
int main()
{

    std::cout << search("cloud","u");
}