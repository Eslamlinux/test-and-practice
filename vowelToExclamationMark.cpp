#include <string>
#include <iostream>
using namespace std;


string replace(const string &s)
{
  string result = "";
  string to_Replace = s;
  for(int i = 0 ;i < to_Replace.length(); i++){
    switch(to_Replace[i]){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
    result += '!';
    break;
    default: 
    result += to_Replace[i];
        }
  }
    return result; //coding and coding....
}
int main() { 
    cout << replace("Hi!");


     return 0;
     }
