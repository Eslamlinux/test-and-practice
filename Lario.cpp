#include <vector>
using namespace std;

#include <iostream>

vector<int> pipe_fix(const vector<int>& nums) {
  vector<int> result;
  for(int i = nums.at(0) ; i <= nums.at(nums.size() -1 ) ;i++){
    result.push_back(i);
  } 
  return result;
}
int main() {
  vector<int> nums = {1, 3, 5, 9};
  vector<int> result = pipe_fix(nums);
  for (int i : result) {
    cout << i << " ";
  }
  return 0;
}
