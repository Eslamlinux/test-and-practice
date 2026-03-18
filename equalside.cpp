#include <vector>
using namespace std;
#include <iostream>
//1,2,3,4,3,2,1 
// int find_even_index (const vector <int> numbers) {
//   int sumRight = 0;
//   int sumLeft = 0;
//   for(int i = 0 ; i < numbers.size() ;i++){
//     sumRight = 0;
//     for(int t = 1 + i ; t <= numbers.size() -1; t++){
//       sumRight += numbers[t];
//     }
//     if(sumLeft != sumRight){
//       sumLeft += numbers[i];
//     }
//     if(sumLeft == sumRight){
//       return i;
//     }
//   }
//   return -1 ;
// }

int find_even_index(const vector<int> numbers) {
    int totalSum = 0;
    int leftSum = 0;
    
    // حساب المجموع الكلي أولاً
    for(int num : numbers) {
        totalSum += num;
    }
    
    for(int i = 0; i < numbers.size(); i++) {
        // totalSum - leftSum - numbers[i] هو rightSum
        if(leftSum == (totalSum - leftSum - numbers[i])) {
            return i;
        }
        leftSum += numbers[i];
    }
    
    return -1;
}
int main(){

cout <<find_even_index({10,-80,10,10,15,35,20}) <<endl;
cout <<find_even_index({20,10,30,10,10,15,35}) << endl;

    return 0;
}
