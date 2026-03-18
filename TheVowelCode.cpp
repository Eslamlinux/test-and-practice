#include <iostream>
#include <string>

std::string encode(const std::string &str) {
    std::string result = "";
    std::string vowels = "aeiou"; 
    for(int i =0 ;i < str.size();i++){
        bool flag = false;
        for(int t = 0 ;t < vowels.size();t++){
            if(tolower(str[i]) == vowels[t]){
                result+= std::to_string(t+1);
                flag = true;
                break;
            }

            }
        if(!flag)
            result+= str[i];
        
    }
  return result;
}
std::string decode(const std::string &str) {
    std::string result = "";
    std::string vowels = "12345"; //hello
    for(int i =0 ;i < str.size();i++){
        bool flag = false;
        for(int t = 0 ;t < vowels.size();t++){
            if(tolower(str[i]) == vowels[t]){
                switch (t){
                    case 0: result+= 'a'; break;
                    case 1: result+= 'e'; break;
                    case 2: result+= 'i'; break;
                    case 3: result+= 'o'; break;
                    case 4: result+= 'u'; break;
                }
                flag = true;
                break;
            }

            }
        if(!flag){
            result+= str[i];
        }
    }
  return result;
}

int main()
{

/*
a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
*/
std::cout << encode("hEllo") << std::endl;
std::cout << decode("h2ll4") << std::endl;

    return 0;
}

