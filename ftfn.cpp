// /* Find the first non-consecutive number */

// #include <optional>
// using namespace std;
// #include <vector>
// optional<int> firstNonConsecutive(const vector<int>& numbers) {
//   optional<int> last = nullopt;
//   if(numbers.empty()){
//     return nullopt;
//   }
//   int fstart = numbers[0];
//   for(int i = fstart; i < numbers[numbers.size()-1]; i++){
//     if(numbers[i - fstart] != i){
//       last = numbers[i - fstart] ;
//       break;
//     }
//   }
  
//   return last;
// }
