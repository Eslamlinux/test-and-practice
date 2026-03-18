using namespace std;
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

vector<int> digitize(unsigned long n) 
{
    string num = to_string(n);
    vector<string> strnum;
    vector<int> result;
  
  for(int i = num.length() -1 ; i >= 0 ; i--) {
    strnum.push_back(num.substr(i, 1));
  }
    for(int i = 0 ; i < strnum.size() ; i++) {
        result.push_back(stoi(strnum.at(i)));
    }

  return result;
}
int main() {
    unsigned long n = 1234567890;
    vector<int> result = digitize(n);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
