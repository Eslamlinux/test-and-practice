#include <iostream>
#include <ctime>
#include <unistd.h>

	int minut_timer = 0;
	int sec_timer = 0;
	int hour_timer = 0;

void displaytime()
{
	system("clear");
	time_t alltime = time(nullptr);
	struct tm* toget = localtime(&alltime);
	int sec = toget->tm_sec ;
	int min = toget->tm_min;
	int hou = toget->tm_hour;
	std::string timezone = toget->tm_zone;
	std::cout <<"===========================================\n" ;
	std::cout <<"the time now: " << hou << " : " << min << " : " <<  sec << " " ;
	hou >= 13 ? std::cout<< "Pm * "  : std::cout<< "AM * " ;
	std::cout<< "time zone: "<< timezone << std::endl;
	if(sec ==1){
		minut_timer++;
	}
	if(sec){
		sec_timer++;
	}
	if(min == 59){
		hour_timer++;
	}
	std::cout <<"===========================================\n" ;
	std::cout <<"===========================================\n" ;
	std::cout <<"All time: "<< hour_timer << "  hours * " << minut_timer << " minuts * " << sec_timer << " second \n" ;
	std::cout <<"===========================================\n" ;

}

//int main()
//{
//
//	while(true){
//		displaytime();
//		sleep(1);
//	}
//
//
//	return 0;
//}
