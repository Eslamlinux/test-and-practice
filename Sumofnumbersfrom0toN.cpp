#include <iostream>
/*
Description:
We want to generate a function that computes the series starting from 0 and ending until the given number.
Example:
Input:
> 6
Output:
0+1+2+3+4+5+6 = 21
Input:
> -15
Output:
-15<0
Input:
> 0
Output:
0=0
*/
class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  std::string showSequence();
};

std::string SequenceSum::showSequence(){
    std::string result = "";
    if(count < 0)
    {
        return std::to_string(count) + "<0";
    }
    if(count == 0)
    {
        return "0=0";
    }
    for(int i = 0; i <= count; i++)
    {
        result += std::to_string(i);
        if(i != count)
        {
            result += "+";
        }
    }
    int sum = (count * (count + 1)) / 2;
    result += " = " + std::to_string(sum);
    return result;
}
SequenceSum::SequenceSum (int c) {
  count = c;
}
int main()
{
    SequenceSum seqsum (-15);
    std::cout<< seqsum.showSequence(); // Equals("0+1+2+3+4+5+6 = 21"));


    return 0;
}
