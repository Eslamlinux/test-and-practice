#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
    int TotalPoints = 0;
    for(int i =0 ; i < classPoints.size() ; i++){
      TotalPoints += classPoints.at(i);
    }
    int AveragePoints = TotalPoints / classPoints.size();

      if(AveragePoints > yourPoints) {return false;}
      
      return true;
      }
int main() {
    vector<int> classPoints = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int yourPoints = 69;
    cout << betterThanAverage(classPoints, yourPoints) << endl;
  

  return 0;
    }
