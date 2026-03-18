#include <iostream>

//enum
//enum class

enum items
{
    Apple =1,
    phone,
    pc,
    Exit
};

enum class items2
{
    Apple =1,
    phone,
    pc,
    Exit
};
void choseItem(bool& wo)
{
    int chosenum;
    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    std::cout << "apple [1] - phone [2] - pc [3] - Exit [4]\n";
    std::cout << "chose item: ";
    std::cin >> chosenum;
    switch(chosenum)
    {
        case items::Apple:
        system("clear");
        std::cout<< "         \t\t *-*-*-*\n";
        std::cout<< "\tyou chose\t *apple*\n";
        std::cout<< "         \t\t *-*-*-*\n";        
        break;
        case items::phone:
        system("clear");
        std::cout<< "         \t\t *-*-*-*\n";
        std::cout<< "\tyou chose\t *phone*\n";
        std::cout<< "         \t\t *-*-*-*\n";
        break;
        case items::pc:
        system("clear");
        std::cout<< "         \t\t *-*-*-*\n";
        std::cout<< "\tyou chose\t *  pc *\n";
        std::cout<< "         \t\t *-*-*-*\n";        
        break;
        case items::Exit:
        wo = false;
        break;
        default:
        system("clear");
        std::cout<< "         \t\t *-*-*-*-*-*-*\n";
        std::cout<< "\tyou chose\t *wrong chose*\n";
        std::cout<< "         \t\t *-*-*-*-*-*-*\n"; 
        break;
    }
}
int main()
{
    bool worke = true;
    while (worke)
    {
        choseItem(worke);
        if(!worke)
        break;
    }
    
    return 0;
}