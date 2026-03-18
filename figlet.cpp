#include <iostream>
bool Is_Found()
{
	std::string Command = "figlet -v > /dev/null 2>&1";
	int Return_Code = system(Command.c_str());
	return Return_Code == 0;
}	
void printtosystem(std::string str)
{
	std::string command = "figlet " + str;
	system("clear");
	system(command.c_str());
	std::cout << "\n done\n";
	return ;
}


	std::string entry;
void start()
{
	if(entry == "qq")
		return;
	else if(Is_Found() == true )
	{
	std::cout << "####### system is found figlet #######\n";
	std::cout << "enter somthing to printed cool way" << std::endl;
	std::getline(std::cin ,entry);
	printtosystem(""""+entry+"""");
	}
	else
		std::cout << "sorry figlet not found in youre system\n"
			<< "to install it press y or n for quit\n";
	char ent;
	std::cin >> ent;
	if(ent == 'y')
		system("sudo apt install figlet");
	else
		return;
}

int main()
{
	while(entry != "qq")
	{
		start();
	}

	return 0;
}
