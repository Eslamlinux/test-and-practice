#include <tuple>
#include <iostream>

std::tuple<std::string, int, int> customer(std::string name,int age,int id){
    std::tuple<std::string, int, int> result;
    result = std::make_tuple(name,age,id);
    return result;
}

std::tuple<int ,int> fun(){
    int x,y;

    std::cout<< " plz enter 2 number \n";
    std::cin >> x >> y;

    // std::tuple<int,int>result = std::make_tuple(x,y);
    // std::cin.ignore();
    // std::cin.get(); // to puse the program
    // return result;

    return std::make_tuple(x,y);
}

int main()
{
    std::tuple<int,std::string ,char,std::string> t1;
    t1 = std::make_tuple(100 ,"hello" ,'E',"slam");
    

    int a = std::get<0>(t1);
    std::string b = std::get<1>(t1);
    char c = std::get<2>(t1);
    auto d = std::get<3>(t1);

    std::cout << a << " " << b << " " << c << "" << d << "\n";


    std::string f = std::get<0>(customer("Eslam",34,213));
    int i = std::get<1>(customer("Eslam",34,213));
    int s = std::get<2>(customer("Eslam",34,213));
    std::cout << f << " " << i << " " << s << "\n";


    std::cout << std::get<std::string>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<1>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<2>(customer("mohamed",24,214)) << " ";
    std::cout << std::get<std::string>(customer("mohamed",24,214)) << " \n";
    
    //modify
    std::tuple<std::string,int,int> te;
    std::tuple<std::string,int,int> tt;
    // te = std::make_tuple("mohamed",24,214);
    // te = customer("mohamed",24,214);
    tt = std::make_tuple("mohamed",24,214);
    te = tt;
    std::cout << std::get<std::string> (te) << std::endl;
    std::get<std::string>(te) = "hassan" ;
    std::cout << std::get<std::string> (te) << std::endl;



    std::tuple<int,int,int> ta;
    ta = std::make_tuple(1,2,3);
    std::tuple<int,int,int> tb;
    tb = std::make_tuple(4,5,6);

    ta.swap(tb);
    std::cout<< std::get<0>(ta) << std::endl;
    std::cout<< std::get<0>(tb) << std::endl;

    int x , z , y;
    std::tie(x,z,y) = ta;
    std::cout<< "after tie\t" <<  x << std::endl;
    std::cout<< "after tie\t" <<  z << std::endl;
    std::cout<< "after tie\t" <<  y << std::endl;


    auto [r,t,u] = ta;
    std::cout<< r << " " << t << " " << u << std::endl;

    // auto[l,k] = fun();
    // std::cout<< l << " " << k << std::endl;
    auto new_tuple = fun();
    std::cout<< std::get<0>(new_tuple) << " " <<  std::get<1>(new_tuple) << std::endl;
    std::cin.ignore();
    std::cin.get(); // to puse the program

    return 0;
}