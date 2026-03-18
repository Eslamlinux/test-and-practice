// #include <string>
// #include <cmath>
// #include <iostream>
// using namespace std;


// // string autoMorphic(int number)
// // {
// //   string result ,tempres;
// //   string tempnum = to_string(number);
// //   int tpow = pow(number,2);
// //   tempres = to_string(tpow);
// //   int tn = tempnum.length();
// //   int tr = tempres.length();
// //     if(tr == 1 && tn == 1){
// //         return tempres == tempnum ? "Automorphic": "Not!!";
// //     }
// //     for(int i = 0; i < tn;i++){
// //         for(int t = tr - tn ; t < tr;t++){
// //             if(tempnum[i] != tempres[t+i]){
// //                 return "Not!!";
// //             }
// //             else{
// //             result = "Automorphic";
// //             break;
// //             }
// //         }
// //     }
// //   return result;
// // }

// string autoMorphic(int number)
// {
//     int tomod = pow(number,2);
//         long long square = (long long)number * number;
//     int numDigits = 0;
//     int tempNum = number;
//     if (tempNum == 0) {
//         numDigits = 1;
//     } else {
//         while (tempNum > 0) {
//             tempNum /= 10;
//             numDigits++;
//         }
//     }
    
//     long long powerOf10 = 1;
//     for (int i = 0; i < numDigits; i++) {
//         powerOf10 *= 10;
//     }

//     if (square % powerOf10 == number) {
//         return "Automorphic";
//     } else {
//         return "Not!!";
//     }

// }
// //لا تعمل مع الارقام الكبيرة الدالة التالية
// // string autoMorphic(int number){
// //     string num_str = to_string(number);
// //     string square_str = to_string((long long)pow(number,2)); 
// //     string last_digits = square_str.substr(square_str.length() - num_str.length());
    
// //     if (last_digits == num_str) {
// //         return "Automorphic";
// //     } else {
// //         return "Not!!";
// //     }
// // }
// int main(){
// cout << autoMorphic(1) << endl; //auto
// cout << autoMorphic(3) << endl; //not
// cout << autoMorphic(6) << endl; //auto
// cout << autoMorphic(9) << endl; //not
// cout << autoMorphic(25) << endl; //auto /625
// cout << autoMorphic(13) << endl; //not
// cout << autoMorphic(76) << endl; //auto
// cout << autoMorphic(95) << endl; //not
// cout << autoMorphic(625) << endl; //auto
// cout << autoMorphic(225) << endl; //not
// cout << autoMorphic(425) << endl; //not
// cout << autoMorphic(399) << endl; //not
// cout << autoMorphic(100) << endl; //not
// cout << autoMorphic(9376) << endl;
// cout << autoMorphic(90625) << endl;
// cout << autoMorphic(109376) << endl;
// cout << autoMorphic(890625) << endl;
// cout << autoMorphic(2890625) << endl;
// cout << autoMorphic(7109376) << endl;
// cout << autoMorphic(12890625) << endl;
// cout << autoMorphic(87109376) << endl;
// cout << autoMorphic(212890625) << endl;
// cout << autoMorphic(787109376) << endl;
// cout << autoMorphic(1787109376) << endl; 
//     return 0;
// }