#include <string>
#include <iostream>
#include <vector>
using namespace std;

string fakeBin(string str){
  vector<string> str_Array ;
  string between;
  string result;
  
  
  // for(int i = 0 ;i < str.length(); i++){
  //   between = str[i];
  //   str_Array.push_back(between);
  // }

  // for(int i = 0; i < str_Array.size(); i++){
  //   if(stoi(str_Array.at(i)) < 5){
  //     result += "0";
  //   }else{
  //     result += "1";
  //   }
  // }

for(int i = 0; i < str.length(); i++){
    if(str[i] < '5'){
      result += "0";
    }else{
      result += "1";
    }
  }

  return result;
  
}


int main() {
   string tes = "45385593107843568";
   fakeBin(tes);
   cout << fakeBin(tes) << endl;

    return 0;
    }
