#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int solve(vector<string>v){
    int evenCount = 0;
    int oddCount = 0;
    vector<int> numbers;
    for(auto i : v){
        if(isdigit(i[0])){
            int num = stoi(i);
            numbers.push_back(num);
        }
        
    }
          
    
  for(int num : numbers){
    if(num %2 == 0 ){
      evenCount++;
    }
    if(num %2 == 1) {
      oddCount++;
    }
  }
  return  evenCount - oddCount;
}
int main()
{
  vector<string>v = {"5", "15", "16", "10", "6", "4", "16", "t", "13", "n", "14", "k", "n", "0", "q", "d", "7", "9"};
  int result = solve(v);
  cout << "The difference between even and odd is: " << result << endl;
  return 0;
}
