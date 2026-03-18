#include "to_int.h"

// Function to convert string to integer

size_t to_int(std::string &Enter_String_Has_A_Number) {
    size_t result = 0;
    std::string OnlyNum;
    for(auto c : Enter_String_Has_A_Number) {
        if(isdigit(c)) {
            OnlyNum += c;
        }
    }
    // Handle strings longer than 19 characters to prevent overflow
    if(OnlyNum.size() > 9) {
        return result; // Return 0 for empty string
    }
    // Convert each character to digit and build the integer
    for (char c : Enter_String_Has_A_Number) 
    {
        if(isdigit(c)) {
        result = result * 10 + (c - '0');
    }
    }
    return result;
}

//Example usage
// int main() {
//     std::string numberStr = "a9999y999oiiiiuhhhi99";
//     int number = to_int(numberStr);
//     std::cout << "The integer value is: " << number << std::endl;
//     return 0;
// }