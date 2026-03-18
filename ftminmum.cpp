#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long minValue (vector <int> values)
{
  int res =0;
  string result;
  for(int i =0; i < values.size(); i++){
    for(int t =i; t < values.size();t++){
      if(i != t){
        if(values[i] == values[t]){
          values.erase(values.begin() + t);
          t--;
        }
      }
    }
    res = res * 10 + values[i];
  }
  result = to_string(res);
  sort(result.begin(), result.end());

 return stoi(result) ; 
}

int main(){
    vector<int> a {4,8,1,4};

    cout << minValue(a);

    return 0;
}
