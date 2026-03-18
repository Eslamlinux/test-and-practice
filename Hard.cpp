#include <iostream>

#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;

int save(vector<int> sizes, int hd) {
  int sum = 0; //8
  int sumcount = 0;
  for(int i = 0 ; i < sizes.size(); i++){
    if( sum + sizes[i] <= hd ){
      sum += sizes[i];
      sumcount++;
    }
    else{
      break;
    }
  }
  return sumcount;
}
int main() {
  int n, hd;
  vector<int> sizes({4,8,15,16,23,42});
  hd = 108;
  int result = save(sizes, hd);
  cout << result << endl;
  return 0;
}
