#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string solve(string s, int a, int b) {
  
    if (b >= s.size()) {
        b = s.size() - 1;
    }
  
    reverse(s.begin() + a, s.begin() + b + 1);
    return s;
}

int main() {
    string s = "codewars";
    int a = 1;
    int b = 5; // b أكبر من طول النص
    string result = solve(s, a, b);
    cout << result << endl;
    return 0;
}
