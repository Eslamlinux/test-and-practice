#include <iostream>

void printhead()
{
    std::cout << "\t\t\t\tMultiplication Table From 1 To 10\n\t";
    for(int i = 1; i <= 10;i++)
    {
        std::cout  << "\t"<< i;
    }
        std::cout << "\n___________________________________________________________________________________________\n";
}
void printtble()
{
    printhead();
    for(int i = 1; i <= 10;i++)
    {
        std::cout << i << "\t|\t";
        for(int t = 1;t <= 10 ;t++)
        {
            std::cout << i * t << "\t";
        }
        std::cout << "\n";
    }

}
int main()
{
    printtble();
    return 0;
}