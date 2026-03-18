#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cctype>


std::string string_builder(std::string expression) {
    std::stack<int> countStack;
    std::stack<std::string> resultStack;
    std::string currentString = ""; 
    int k = 0;                  

    for (char c : expression) {
        if (std::isdigit(c)) {
            k = k * 10 + (c - '0');
        } 
        else if (c == '[') {
            countStack.push(k);
            resultStack.push(currentString);
            currentString = "";
            k = 0;
        } 
        else if (c == ']') {
            int repeatCount = countStack.top();
            countStack.pop();
            std::string repeatedString = "";
            if (repeatCount > 0) {
                for (int i = 0; i < repeatCount; ++i) {
                    repeatedString += currentString;
                }
            }
            
            std::string prevString = resultStack.top();
            resultStack.pop();
            
            currentString = prevString + repeatedString;
        } 
        else {
            currentString += c;
        }
    }
    if (k > 0 && currentString.length() > 0 && countStack.empty()) {
        char charToRepeat = currentString.back();
        std::string baseString = currentString.substr(0, currentString.length() - 1);
        
        std::string repeatedPart = "";
        for (int i = 0; i < k; ++i) {
            repeatedPart += charToRepeat;
        }
        
        return baseString + repeatedPart;
    }
    return currentString;
}
// مثال للاستخدام والاختبار
int main() {
    std::cout << "Input 1: 4a" << std::endl;
    std::cout << "Output 1: " << string_builder("4a") << std::endl; // Output: aaaa

    std::cout << "\nInput 2: 3[a2[c]]" << std::endl;
    std::cout << "Output 2: " << string_builder("3[a2[c]]") << std::endl; // Output: accaccacc
   
    return 0;
}