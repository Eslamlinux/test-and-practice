#include <string>
#include <algorithm> 
#include <iostream>
using namespace std;

// int repetitions(string s) { 
//     size_t result = 0;
//     for(int i = 0; i < s.size(); i++)
//     {
//         size_t temp = 0;
//         for(int t = i -1; t < s.size(); t++)
//         {
//             if(s[i] == s[t])
//                 temp++;
//             else
//                 break;
//         }
//         if(temp > result)
//                 result = temp;
//     }
//     return result ;
// }

int repetitions(string s) { 
    if (s.empty())
        return 0;
    size_t max_reps = 1, current_reps = 1; 
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1])
            current_reps++;
        else
            current_reps = 1;
        max_reps = std::max(max_reps, current_reps);
    }
    return max_reps;
}

int main()
{
    std::cout << repetitions("AAAAAAAAAA") <<std::endl;
    std::cout << repetitions("AAAABBBCCD") <<std::endl;
    std::cout << repetitions("AMMMDDCCCMD") <<std::endl;
    std::cout << repetitions("MZSDDDD") <<std::endl;
}