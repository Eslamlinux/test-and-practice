#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) { 
   string words;
   bool resualt;
    for(auto st : s){
        words += tolower(st);
    }

    for(int i = 0 ; i < words.length() ; i++){
        if(words[i] == ' '  || 
            words[i] == ',' || 
            words[i] == ':' || 
            words[i] == '-' || 
            words[i] == '.' ||
            words[i] == ';' ||
            words[i] == '?' ||
            words[i] == '!' ||
            words[i] == '\'' ||
            words[i] == '\"' ||
            words[i] == '(' ||
            words[i] == ')' ||
            words[i] == '[' ||
            words[i] == ']' ||
            words[i] == '{' ||
            words[i] == '}' ||
            words[i] == '/' ){
            words.erase(i, 1);
            i--;}
        }
        
       for(int i = 0 ; i < words.length()/2 ; i++){
            if(words[i] != words[words.length()-1-i]){
               
                resualt = false;
                break;
            }
            else if(words[i] == words[words.length()-1-i]){
             resualt = true;
            }
        }
    return resualt;
    }
   

int main() {

   cout << isPalindrome("A man, al plan, A canal: Panama") ;
    
    return 0;
}
