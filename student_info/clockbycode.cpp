#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <unistd.h>
#include <utility>

std::pair<int,int> Start_Prog(std::string Entry)
{
std::pair<int,int> Result {0,0};
if(Entry.length() > 2)
{
std::cout<< "You entered more than what clock need... try later\n";
return std::make_pair(0,0);
}

if(!std::isdigit(Entry[0] - '0') && std::isdigit(Entry[1] -'0'))
{
std::cout<< "the clock need to Number to work... try later\n";
return std::make_pair(0,0);
}

else if(Entry.length() <= 2)
{
Result.first = Entry[0] - '0';
Result.second = Entry[1] - '0';
}

return Result;
}


int main(int argc , char ** argv)
{
int Hour1 ,Hour2, Minutes1, Minutes2, Temp;
std::string Hours , Minutes; 
std::cout << "Welcome to clock console" << std::endl;
std::cout << "Please Enter The Hour To set the clock '00' or '01' " << std::endl;
std::cin >>Hours;
std::cin.ignore();
Hour1 = Start_Prog(Hours).first;
Hour2 = Start_Prog(Hours).second;

std::cout << "Now Enter The Minutes To set the clock '00' or '01' " << std::endl;
std::cin >>Minutes;
std::cin.ignore();
Minutes1 = Start_Prog(Minutes).first;
Minutes2 = Start_Prog(Minutes).second;

std::pair<int,int> hour ={Hour1,Hour2};
std::pair<int,int> min ={Minutes1,Minutes2};
std::pair<int,int> sec ={0,0};

std::string W_Time;

while(true)
{

if(hour.first >= 1 && hour.second >=2){W_Time = "PM";}
if(hour.first > 1 && hour.second >=0){W_Time = "PM";}
if(hour.first == 0 && hour.second <= 9) {W_Time = "AM";}
if(hour.first == 1 && hour.second < 2) {W_Time = "AM";}

if(sec.first >= 5 && sec.second  >= 9 )
	{
	sec.first = 0;
	sec.second = 0;

	if(min.first >= 5 && min.second >= 9)
		{
			min.first = 0;
			min.second = 0;
if(hour.first == 0 && hour.second < 9){hour.second ++; W_Time = "AM";}
if(hour.first == 1 && hour.second == 9 ){hour.first++;hour.second = 0; W_Time = "PM";continue;}
if(hour.first == 1 && hour.second > 1){hour.second++; W_Time = "PM";}
if(hour.first == 1 && hour.second <2){hour.second++; if(hour.first >=1 && hour.second >= 2)W_Time = "PM"; else W_Time = "AM"; }
if(hour.first == 0 && hour.second >= 9){hour.first++; hour.second = 0; W_Time = "AM";}
if(hour.first == 2 && hour.second < 4){hour.second++; W_Time = "PM";}
if(hour.first == 2 && hour.second == 4){hour.first = 0; hour.second = 0; W_Time = "AM";}

		}
	if(min.second < 9)
		{
		min.second++;
		}
		else 
		{
		if(min.first < 6)
		{
		min.first++;
		}
		min.second =0;
		}

	}


if(sec.second < 9 )
	{
	sec.second++;
	}
	else 
{
		sec.second = 0;
		sec.first++;
}
		

sleep(1);
system("clear");
std::cout << "Time: " << hour.first << hour.second << " : " << min.first << min.second << " : " 
<< sec.first << sec.second << " " << W_Time << std::endl;
}

	return 0;
}
