#include <iostream>
using namespace std;



long long factorial(int n){
//   long long int result = 1;
//   for(int i = n ; i > 0; i--){
//     result *= i ;
//   }
//   return result; 
    return n == 0 ? 1 : n * factorial(n - 1);

}
int main(){
// cout << factorial(5);
int m =1;
m = 2 * 10 + m;
cout << m ;

    return 0;
}
