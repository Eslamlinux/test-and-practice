#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string highAndLow(const string& numbers){
string result;
string temp;
vector<int> n;

for(int i =0; i < numbers.length(); i++){
    if(numbers[i] != ' '){
        temp += numbers[i];
    }
    if(numbers[i] == ' '){
        n.push_back(stoi(temp));
        temp = "";
    }
}
if(!temp.empty()){
        n.push_back(stoi(temp));
        temp = "";
}
int high = n[0];
int low = n[0];
for(int i =0; i < n.size(); i++){
    if(n[i] > high){high = n[i];}
    if(n[i] < low){low = n[i];}
}
return to_string(high) + " " + to_string(low);

// sort(n.begin(), n.end());
// return "after sort " + to_string(n[n.size()-1]) + " " + to_string(n[0]);

}
int main(){

 cout << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4");

    return 0;
}
