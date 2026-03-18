#include <iostream>
#include <vector>
using namespace std;


int findDonationTargetDay(vector<float> donations,float target) { 
    float sum = 0;
    int resualt = 0;
for(int i =0; i < donations.size() ; i++){
    sum += donations.at(i);
    if(sum >= target) {resualt = i+1;break;}
    else if(sum < target && i == donations.size()-1 ){resualt = -1;break;}
}
    return resualt;
}


int main() {

    vector<float> donations = {10, 15, 2};
    float target = 100;
    int day = findDonationTargetDay(donations, target);
  cout << day << endl;

    return 0;
}
