#include <iostream>
#include <cstring>

union sam
{
    private:
    int passcode;
    public:
    int num;
    double a;
    char c[12];
    void set_pass(int toset)
        {
            passcode = toset;
        }
    int getcode()
        {
            return passcode;
        }
        void printc()
        {
            for(auto ch :c)
            {
                std::cout << ch  ;
            }
        }
};

int main()
{
    sam fir;
    // fir.c[0] = 'e';
    // fir.c[1] = 's';
    // fir.c[2] = 'l';
    // fir.c[3] = 'a';
    // fir.c[4] = 'm';
    // fir.c[5] = ' ';
    // fir.c[6] = 'k';
    // fir.c[7] = 'h';
    // fir.c[8] = 'a';
    // fir.c[9] = 'l';
    // fir.c[10] = 'i';
    // fir.c[11] = 'd';
    strcpy(fir.c,"eslam khalid");
    fir.printc() ;
    std::cout << "\n";
    std::cout << "the top data size: " << sizeof(fir) <<std::endl;


    return 0;
}