#include <map>
#include <string>
#include <iostream>
using namespace std;
map<char, unsigned> count(const string& string) {
  map<char, unsigned> result;
//   for(int i = 0; i < string.length(); i++){
//     int count = 0;
//     for(int t = i;t < string.length(); t++){
//       if(string[i] == string[t]){
//         count++;
//       }
//     }
//     result.insert({string[i],count}) ; 
//   }

for(auto c:string){
    result[c]++;
}

    return result;
}
int main(){
    for(auto a: count("gejabashlsmnbbdlcikf")){
        cout << "char:[ " << a.first << " ] count: " << a.second  << endl;
    }

    return 0;
}
