#include<iostream>
using namespace std;
#include <vector>



vector<int> countPositivesSumNegatives(vector<int> input)
{
    if(input.size() <= 0){return input;}

    int count_Positives = 0;
    int count_Negative = 0;
    for(int i = 0 ; i < input.size() ; i++) {
        if(input.at(i) > 0){count_Positives++;}
        else if(input.at(i) < 0){count_Negative += input.at(i);}
    }
    vector<int> arr = {count_Positives,count_Negative};
  return {count_Positives,count_Negative};
}

int main() {
    vector<int> input = {1, 2, 3, -4, -5};
    vector<int> result = countPositivesSumNegatives(input);
    cout << "Count of positives: " << result[0] << ", Sum of negatives: " << result[1] << endl;
    return 0;
}
