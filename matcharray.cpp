#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool match_arrays(vector<string> array1,vector<string> array2) { 
sort(array1.begin(),array1.end());
sort(array2.begin(),array2.end());
return array1 == array2;
}
int main()
{
std::cout << match_arrays({"hello","there", "word2"},{"word2", "there", "hello"}) << std::endl;
return 0;
}