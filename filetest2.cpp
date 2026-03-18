#include <iostream>
#include <fstream>
void Creat_Txt_File(std::string entry)
{
    system("clear");


    std::ofstream myfile("filetest2.txt");
    myfile << entry << "\n";
    myfile.close();
    std::ifstream fileline("filetest2.txt");
    std::string toread;

    if(fileline.is_open()){
    while(getline(fileline ,toread)){
    std::cout << toread << std::endl;
    }
    fileline.close();
        system("clear");
    }
    else{
        std::cerr << "Error: Could not open the file.\n";
    }

}
int main()
{
Creat_Txt_File("eslam");
Creat_Txt_File("hassan");





return 0;
}
