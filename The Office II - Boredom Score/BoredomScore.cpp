/*
 Every now and then people in the office moves teams or departments. Depending what people are doing with their time they can become more or less boring. Time to assess the current team.

You will be provided with an object(staff) containing the staff names as keys, and the department they work in as values.

Each department has a different boredom assessment score, as follows:

accounts = 1
finance = 2
canteen = 10
regulation = 3
trading = 6
change = 6
IS = 8
retail = 5
cleaning = 4
pissing about = 25
Depending on the cumulative score of the team, return the appropriate sentiment:
<=80: 'kill me now'
< 100 & > 80: 'i can handle this'
100 or over: 'party time!!'
 */
#include <iostream>
#include <map>
#include <string>

std::string boredom(const std::map<std::string, std::string> &staff){
	size_t count = 0;
	for(auto c : staff )
	{
		if(c.second == "accounts") count ++;
		if(c.second == "finance") count += 2;
		if(c.second == "canteen") count += 10;
		if(c.second == "regulation") count += 3;
		if(c.second == "trading") count +=6;
		if(c.second == "change") count +=6;
		if(c.second == "IS") count +=8;
		if(c.second == "retail") count +=5;
		if(c.second == "cleaning") count +=4;
		if(c.second == "pissing about") count +=25;
	}
	return count <= 80? "kill me now": count > 80 && count < 100? "i can handle this":count > 100 ? "party time!!":"";
}

int main()
{
std::map<std::string, std::string>map1 = { {"tim","change"}, {"jim","accounts"},
	          {"randy","canteen"}, {"sandy","change"}, {"andy","change"}, {"katie","IS"},
	          {"laura","change"}, {"saajid","IS"}, {"alex","trading"}, {"john","accounts"},
	          {"mr","finance"} };
std::cout << boredom(map1) << std::endl;
}
