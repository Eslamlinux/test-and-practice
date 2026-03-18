/*
 Time to win the lottery!

Given a lottery ticket (ticket), represented by an array of 2-value arrays, you must find out if you've won the jackpot.

Example ticket:

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }
To do this, you must first count the 'mini-wins' on your ticket. Each subarray has both a string and a number within it. If the character code of any of the characters in the string matches the number, you get a mini win. Note you can only have one mini win per sub array.

Once you have counted all of your mini wins, compare that number to the other input provided (win). If your total is more than or equal to (win), return 'Winner!'. Else return 'Loser!'.

All inputs will be in the correct format. Strings on tickets are not always the same length.


 */
#include <iostream>
#include <utility>
#include <vector>
std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
	int Win_count =0;
	for(const auto& p:ticket)
	{
		for(size_t i = 0; i < p.first.length();i++)
		{
			if(p.first[i] == p.second)
				{
				Win_count++;
				break;
				}
		}
	}

  return Win_count >= win ? "Winner!" : "Loser!";
}

int main()
{
	std::vector<std::pair<std::string,int>> tosent = {{"ABC", 65}, {"HGR", 74}, {"BYHT", 74}};
	std::cout << bingo(tosent,2) << std::endl;
	return 0;
}
