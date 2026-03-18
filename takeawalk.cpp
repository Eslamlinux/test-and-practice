/*
You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.

Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). It will never give you an empty array (that's not a walk, that's standing still!).
*/
#include <iostream>
#include<vector>

bool isValidWalk(std::vector<char> walk) {
    if(walk.size() != 10) return false;
    int e = 0 , w = 0, n = 0 , s = 0;
    int x =0,y=0;
    for(int i = 0 ; i < walk.size(); i++)
    {
        // walk[i] == 'e' ? e++ : walk[i] == 'w'? w++ : walk[i] == 'n'? n++ : walk[i] == 's'? s++ :0;
        walk[i] == 'e' ? x++ : walk[i] == 'w'? x-- : walk[i] == 'n'? y++ : walk[i] == 's'? y-- :0;
    }
return walk.size() == 10 && x == y ;
// return walk.size() == 10 && e == w && n == s;
}

int main()
{

std::cout << isValidWalk({'n'}) << std::endl; // false
std::cout << isValidWalk({'n','s','n','s','n','s','n','s','n','s'}) << std::endl; //true
std::cout << isValidWalk({'n','s'}) << std::endl;  // false
std::cout << isValidWalk({'n','s','n','s','n','s','n','s','n','s','n','s'}) << std::endl;  // false
std::cout << isValidWalk({'e','w','e','w','n','s','n','s','e','w'}) << std::endl; //true
std::cout << isValidWalk({'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'}) << std::endl;  // false
    return 0;
}