#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

vector<int> countdown(int num) { 
 vector<int> result;
 if(num <= 3 ){return {0};}
 for(int i = num; i > 1 ; i = i -3){
    if(i % 2 == 0 && i != num){
        result.push_back(i);
    }
 }
  reverse(result.begin(),result.end());
  return result;
}

int main() {

for(int c: countdown(103)){
    cout << c << " ";
}

  return 0;
}
