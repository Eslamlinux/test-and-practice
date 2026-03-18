#include <iostream>
#include <algorithm>
#include <vector>
void to_lower_case(std::string& str)
{
    std::transform(str.begin(),str.end(),str.begin(),[](unsigned char c){
    return std::tolower(c);
    });
}
std::string canForm(std::string source,std::string target) { 
    to_lower_case(source);
    to_lower_case(target);
std::vector<int> char_counts(26, 0);
    for (char c : source) {
        if (c >= 'a' && c <= 'z')
            char_counts[c - 'a']++;
    }
    for (char c : target) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (char_counts[index] > 0) 
                char_counts[index]--;
            else 
                return "no";
        }
    }
    return "yes";
}

/*
source = 'Hubcoders'
target = 'coderhub'

*/
int main()
{
std::cout << canForm("Hubcoders","coderhub") <<std::endl;
std::cout << canForm("SATR","satr") <<std::endl;
std::cout << canForm("programmer","programming") <<std::endl;
std::cout << canForm("worldhello","hello") <<std::endl;

}