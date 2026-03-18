#include <iostream>
#include <tuple>

std::tuple<int ,std::string ,double> person()
{
    return std::make_tuple(33,"eslam",71.5);
}

int main()
{
    auto a = person();
    // std::cout << std::get<std::string>(a) << " " ;
    // std::cout << std::get<int>(a) << " ";
    // std::cout << std::get<double>(a) << " \n";

    auto [age, name, hight] = a;
std::cout << "Name: " << name << "\n";
std::cout << "Age: " << age << "\n";
std::cout << "Hight: " << hight << "\n";
name = "semsem";
std::cout << "Name: " << name << "\n";


using std::cout;
using std::endl;
using tap = std::tuple<int ,std::string,float> ;
tap tp1(10,"tuple",1.5);
tp1 = std::tuple<int,std::string,float>(40,"eslam tuple",0.4);
tp1 = std::make_tuple(44,"tuple mode again",02.2);
std::get<0>(tp1) = 22;
std::get<1>(tp1) = "mode tuple by get";
tp1 = {55,"mode by packing",5.5};
auto [p1,p2,p3] = tp1;
cout << std::get<1>(tp1) <<endl;
cout << std::get<0>(tp1) <<endl;
cout << std::get<2>(tp1) <<endl;


cout << p1 << endl;
cout << p2 << endl;
cout << p3 << endl;

std::string name ;
int numb;
float floa;


tie(numb,std::ignore,floa) = tp1;
cout << name << endl;
//print after ignore with other way nothing will be change
cout << std::get<std::string>(tp1) << endl; 


    return 0;
}