#include <string>
using namespace std;
#include <iostream>

string gimme_the_letters(const string& sp)
{
  string result = "";
  char spa = sp[0];
  char spb = sp[2];
  for(auto i = spa ; i <= spb ; i++){
    result += i;
  }
    return result;
}
int main()
{
  string sp = "h-o";
  cout << gimme_the_letters(sp) << endl;
  return 0;
}
