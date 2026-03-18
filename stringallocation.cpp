#include <iostream>

std::string  after(std::string str){
    str += " - Allocated";
    return str;
}

int main() {

std::string befor {"Hello, World!"};

std::cout << "Before allocation: " << befor << std::endl;
std::cout << "After allocation: " << after(befor) << std::endl;

std::string teststrview = "Test StringView";
std::string_view sv = teststrview;
sv.remove_prefix(11); // Remove "Test "
std::cout << "StringView content: " << sv << std::endl;
std::cout << teststrview << std::endl;
    return 0;
}