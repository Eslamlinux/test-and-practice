#include <iostream>
#include <vector>

class whoami
{
    public:
    int i = 0;
    int t = 0;
    whoami(int ia, int it)
    {
        i = ia;
        t = it;
    }
};

int a(whoami a)
{
    return a.i + a.t ;
}


class str
{

    std::vector<char> chastr;


};
int main()
{
    whoami  who_a(2,5);
    std::cout << a(who_a);


    return 0;
}