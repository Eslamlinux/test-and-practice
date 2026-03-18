#include <iostream>
#include <vector>


int adjacentElementsProduct(std::vector<int> inputArray) 
  {
  int res = inputArray[0] * inputArray[1];
  for(int i = 0;i < inputArray.size() -1;i++)
    {
    if(inputArray[i] * inputArray[i+1] > res)
    res = inputArray[i] * inputArray[i+1];
    }
  return res ;
  }
  int main()
  {
    std::vector<int> v = {3, 6, -2, -5, 7, 3};
    std::cout << adjacentElementsProduct(v);
  
    return 0;
  }