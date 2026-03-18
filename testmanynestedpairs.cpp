#include <iostream>
#include <utility>
#include <vector>
int main()
{

std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, std::pair<int,
std::pair<int, int>>>>>>>>> manypairs;

manypairs.first = 1;
manypairs.second.first = 2;
manypairs.second.second.first = 3;
manypairs.second.second.second.first = 4;
manypairs.second.second.second.second.first = 5;
manypairs.second.second.second.second.second.first = 6;
manypairs.second.second.second.second.second.second.first = 7;
manypairs.second.second.second.second.second.second.second.first = 8; 
manypairs.second.second.second.second.second.second.second.second.first = 9; 
manypairs.second.second.second.second.second.second.second.second.second = 10; 
for(auto pair_element : {manypairs.first,
                         manypairs.second.first,
                         manypairs.second.second.first,
                         manypairs.second.second.second.first,
                         manypairs.second.second.second.second.first,
                         manypairs.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.second.first,
                         manypairs.second.second.second.second.second.second.second.second.second})
                         {
    std::cout << pair_element << std::endl;
                         }

std::cout << "------------------" << std::endl;


std::pair<int,int> manyarray[10]
{{1,2},{3,4},{5,6},{7,8},{9,10},{11,12},{13,14},{15,16},{17,18},{19,20}};
for(auto p: manyarray){
    std::cout << p.first << " , " << p.second << std::endl;
}


std::cout << "------------------" << std::endl;


std::vector<std::pair<int,int>> manypairvec;

manypairvec.push_back({1,2});
manypairvec.push_back(std::make_pair(3,4));
manypairvec.push_back(std::pair<int,int> (5,6));


std::cout << "--------iterator print----------" << std::endl;

std::vector<std::pair<int,int>>::iterator it ;
for(it = manypairvec.begin(); it != manypairvec.end(); it++){
    std::cout << it->first << " , " << it->second << std::endl;
}

std::cout << "--------for each print----------" << std::endl;

for(auto p: manypairvec){
    std::cout << p.first << " , " << p.second << std::endl;
}

    return 0;
}