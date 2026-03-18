
#include <iostream>
#include <utility>
#include <ctime>
#include <string>

int yourold(const int BirthYear){
	int age = 0;
	time_t date_time = time(nullptr);
	struct tm* toget = localtime(&date_time);
	age = toget->tm_year + 1900 - BirthYear;
	return age;
};

void print_yourold(){
	int entry = 0;
	std:: cout << "please Enter your Birth Year\n:- ";
	std::cin >> entry;
	std::cout << "your old now: " << yourold(entry) << std::endl;
}
//int main()
//{
//
//	print_yourold();
//
//	return 0;
//}

