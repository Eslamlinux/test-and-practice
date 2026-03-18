#include <string>
#include <iostream>
using namespace std;


/*
ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string, they should be returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
*/
string rot13(string msg)
{

  string result;
  for(char c : msg)
  {
    if(c <= 'Z')
    {
        if(isalpha(c))
        {
            if(c > 'M')
            {
                result += c - 13;
            }
            else 
            {
                result += c + 13;
            }
        }
       else 
       {
        result +=c;
       }
    }
    if(c > 'Z')
    {
        if(isalpha(c))
        {
            if(c > 'm')
            {
                result += c - 13;
            }
            else 
            {
                result += c + 13;
            }
        }
         else 
         {
            result +=c;
        }
    }
  }
  
  return result;


  // other slution 
    // for(auto& c : msg) 
    // if (islower(c)) c = 'a'+(c-'a'+13)%26; 
    // else if(isupper(c)) x = 'A'+(x-'A'+13)%26;
    // return msg;

}


int main()
{
cout << rot13("a") << endl; //grfg
cout << rot13("Test") << endl; //Grfg
cout << rot13("nopqrstuvwxyzabcdefghijkMm") << endl; //NoPq

    return 0;
}