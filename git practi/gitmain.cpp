#include <ios>
#include <iostream>
#include <limits>
#include <string>

bool isworking = true;
struct user
{
	std::string name = "";
	std::string email = "not set";
	std::string passwd = "******";


};

void UserAct(user& user)
{
	std::string entry;
	std::cout  << " you in Git simulation now you can test your knowledge by orders\n";
	std::cout  << " To Exit enter 'exit'\n";
	std::getline(std::cin, entry);
	if(entry == "user")
	{
	system("clear");
	std::cout << user.name << " please enter your user name\n";
	std::cin >> user.name;
	std::cout << user.name << " please add your email\n";
	std::cin >> user.email;
	std::cout << user.name << " please add your password\n";
	std::cin >> user.passwd;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
	if(entry == "config user.name")
	{
	system("clear");
		std::cout<< "User name is: " << user.name << std::endl;
	}
	if(entry == "config user.email")
	{
		std::cout << "user email is: " << user.email <<std::endl;
	}
	if(entry == "exit")
	{isworking = false;}
}

int main()
{
user gituser;
while (isworking) 
{
	UserAct(gituser);
}
return 0;
}