#include <algorithm>
#include <iostream>
using namespace std;
char getGrade(int a, int b, int c) {
int sum = a + b + c;
int average = sum / 3;
    if(average >= 90 && average <= 100) return 'A';
else if(average >= 90 && average < 100) return 'A';
else if(average >= 80 && average < 90) return 'B';
else if(average >= 70 && average < 80) return 'C';
else if(average >= 60 && average < 70) return 'D';
else return 'F';
}
/*

  int avg = (a + b + c) / 3;
  switch(avg){
  case 90 ... 100: return 'A';
  case 80 ... 89: return 'B';
  case 70 ... 79: return 'C';
  case 60 ... 69: return 'D';
  default: return 'F';}}
*/
int main() {
    int a = 85, b = 90, c = 78;
    char grade = getGrade(a, b, c);
    cout << "Grade: " << grade << endl; // Output: Grade: B
    return 0;
}
