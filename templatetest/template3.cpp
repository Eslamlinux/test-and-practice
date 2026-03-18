#include <iostream>
#include <cstdlib>
#include <iterator>
#include <sstream>

template<class a,class b,class c>
class hello
{
b bb;
public:
hello()
{
	std::cout << "test template and class\n";
}
a bbb = 0;
a aa=10;
a ab=2.5;
char* end;
b setb(std::string toset){bb = toset;return bb;}
//a bbb = std::strtol(bb.c_str(),&end,10) + aa;
void toin()
{
for(size_t i = 0; i < bb.size();i++)
{
std::stringstream sti(bb);
sti >> bbb;
}
bbb += aa;
};

};
//int main()
//{
//hello<double,std::string,char>obj;
//obj.setb("11");
//obj.toin();
//std::cout<< obj.aa + obj.ab << std::endl;
//std::cout<< obj.bbb << std::endl;
//
//return 0;
//}