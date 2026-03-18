#include <iostream>
#include <concepts>



template<class Data_Type ,class Data_Type2>
concept sumonly = requires (Data_Type a,Data_Type2 b)
{
	{a+b}->std::convertible_to<Data_Type>;
};

template<class Data_Type ,class Data_Type2>
requires sumonly<Data_Type,Data_Type2>
auto sum(Data_Type f, Data_Type2 s)
{
return f + s;
}

//Data_Type sum(Data_Type f, Data_Type2 s)
//{
//return f + s;
//}

//int main()
//{
//
//long double fi ;int sec;
//std::cout << "please enter first to sum" << std::endl;
//std::cin >> fi;
//std::cout << "please enter second to sum" << std::endl;
//std::cin >> sec;
//std::cout<<"the result is: " << sum(fi,sec) << std::endl;
//
//return 0;
//}
