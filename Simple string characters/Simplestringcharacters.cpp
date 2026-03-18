#include <cctype>
#include <iostream>
#include <vector>
#include <string>

/*
In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters (everything else), as follows.

The order is: uppercase letters, lowercase letters, numbers and special characters.

"*'&ABCDabcde12345" --> [ 4, 5, 5, 3 ]
*/

std::vector<int> solve(std::string s){
    int upper=0, lower=0, num=0, Schar=0;
	for(char c: s)
	{
	 std::isupper(c)? upper++ : std::islower(c)? lower++:std::isdigit(c)?num++:Schar++ ;
	}
	return{upper,lower,num,Schar};
};

int main()
{


for(int c:solve("Codewars@codewars123.com"))
{
std::cout << c <<std::endl;
}

return 0;
}