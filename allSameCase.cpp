#include <iostream>
using namespace std;

// bool allSameCase(string word) { 
//     bool hasLower = false;
//     bool hasUpper = false;
//     for (char c : word) {
//         if (islower(c)) hasLower = true;
//         if (isupper(c)) hasUpper = true;
//         if (hasLower && hasUpper) return false;
//     }
//     return true;
// }


bool allSameCase(string word) { 
    bool hasLower = false, hasUpper = false;
    for (char c : word) {
        islower(c)? hasLower = true: hasUpper = true ;
        isupper(c)? hasUpper = true : hasLower = true ;
        if(hasLower && hasUpper) return false;
    }
    return true;
}
int main()
{
    std::cout << allSameCase("hello") << "\n"; // true
    std::cout << allSameCase("HELLO") << "\n"; // true
    std::cout << allSameCase("Hello") << "\n"; // false
    return 0;
}