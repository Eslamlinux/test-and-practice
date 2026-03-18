#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>


float calculateTotalFastingTime(vector<string> startTimes,vector<string> endTimes) { 
float resault;
vector<string> sTiH(startTimes);
vector<string> eTiH(endTimes);

for(int i =0; i < sTiH.size(); i++){
  for(int j =0; j < sTiH.at(i).length(); j++){
    if(sTiH.at(i).at(j) == ':'){
        sTiH.at(i).at(j) = '.';
    }
  }
}
for(int i =0; i < eTiH.size(); i++){
  for(int j =0; j < eTiH.at(i).length(); j++){
    if(eTiH.at(i).at(j) == ':'){
        eTiH.at(i).at(j) = '.';
    }
  }
}

vector<float> startTimesInHours;
vector<float> endTimesInHours;
for(int i =0; i < sTiH.size(); i++){
    startTimesInHours.push_back(stof(sTiH.at(i)));
    endTimesInHours.push_back(stof(eTiH.at(i)));
}

for(int i =0; i < sTiH.size(); i++){     
    if(startTimesInHours.at(i) < endTimesInHours.at(i)){
        resault += endTimesInHours.at(i) - startTimesInHours.at(i);
        }
    else {
        resault += startTimesInHours.at(i) - endTimesInHours.at(i); 
    }
}
    return resault;
}



int main() {

    vector<string> startTimes = {"04:45"};
    vector<string> endTimes = {"18:15"};
    float totalFastingTime = calculateTotalFastingTime(startTimes, endTimes);
    cout << totalFastingTime << " hours" << endl;

    return 0;
}
