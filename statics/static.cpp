#include <iostream>

void fun()
{
	static std::string countup ;
//	countup++;
	countup += "eslam ";
	std::cout << countup << std::endl;

}
class cls
{
public:
	cls()
	{
	fun();
	}
};
int main(int argr,char argc)
{
fun();
fun();
cls();
cls();
cls();
cls ss;
cls ss2;
cls ss3;


    return 0;
}
