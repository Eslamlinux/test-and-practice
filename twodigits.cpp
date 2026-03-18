#include <iostream>

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
vector<int> digits(int n){
    vector<int> result;
    string digtoalph = to_string(n);
    for(int i = 0 ;i < digtoalph.length() -1 ; i++){
        for(int t = i+1 ; t < digtoalph.length() ; t++){
        result.push_back( stoi(string(1,digtoalph[i])) + stoi(string(1, digtoalph[t])));
    }
    }
      return result;
  }
int main()
{
  int n = 156; // 6 7 11
  vector<int> result = digits(n);
  cout << "The sequence is: ";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}
