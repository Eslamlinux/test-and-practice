#include <iostream>
#include <string>
using namespace std;

#include <vector>
using namespace std;

int elevator_distance(vector<int> array) {
  int result = 0;
  for(int i = 0; i < array.size()-1;i++){ 
    if(array[i] > array[i+1]){
      result += (array[i] - array[i+1]);
    }
    else {  result += (array[i+1] - array[i]);}
  }
  return result;
}
int main() {
  vector<int> array = {5,2,8};
  int result = elevator_distance(array);
  cout << "Total distance: " << result << endl;
  return 0;
}
