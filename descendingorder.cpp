#include <cinttypes>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
uint64_t descendingOrder(uint64_t a)
{
  uint64_t result = 0;
  string sAll = "";
  int inde =0;
  string str = to_string(a) ;
  for(int i = str.size() -1 ; i >= 0 ; i--){
    char temp = str[i];
    for(int t =str.size()-1; t >= 0 ; t--){
      if(str[t] >= temp){
        temp = str[t];
        inde = t;
      }
    }
    sAll += temp;
    str.erase(str.begin()+ inde);
  }
// for(int i = 0 ; i < sAll.size();i++){
//   result += sAll[i] -'0' ;
// }
result = stoull(sAll);

// stringstream toResult(sAll);
// toResult >> result;
  return result;
}

int main(){

cout << descendingOrder(123456789);

    return 0;
}
