#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;
vector<int> flip(const char dir, const vector<int>& arr) {
  vector<int> tosort;
  for(int i = 0 ; i < arr.size() ; i++){
    tosort.push_back(arr.at(i));
  }
    if(dir == 'R'){
      sort(tosort.begin(),tosort.end());
    }
  else{
      sort(tosort.begin(),tosort.end());
      reverse(tosort.begin(),tosort.end());
  }
    
    return tosort;
}
int main() {
    vector<int> arr = {1, 4, 5, 3, 5};
    char dir = 'L';
    vector<int> result = flip(dir, arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
