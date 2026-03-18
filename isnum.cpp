#include <iostream>
using namespace std;

bool isNumber(string s) { 
    for (char c : s) {
                if(c == '+') continue ;
                if( c == '.')  continue;
                if(c == 'e') continue ;
                if(c == '-') continue ;
       return !isdigit(c)? false : true;
    }  
//    std::cout << "test"; 
return true;
}
int main() {
    string testStr = "+123.456e789";
    if (isNumber(testStr)) {
        cout << testStr << " is a number." << endl;
    } else {
        cout << testStr << " is not a number." << endl;
    }
    return 0;
}
