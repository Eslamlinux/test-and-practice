//count Words
#include <iostream>
#include <sstream>

int countWords(std::string txt) { 
    std::stringstream ss(txt);
    int counter = 0;
    std::string c;
    while(ss >> c)
        counter++;
    return counter;
} 
int main()
{
    std::cout << countWords("Plant hope in the hearts of others") <<std::endl;
    std::cout << countWords("hello ") <<std::endl;

}