#include <iostream>
#include <vector>
class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        for(int i = 0; i < array.size(); i++)
        {
            if(array[i] % 2 == 0)
            {
                continue;
            }
            for(int j = i +1 ; j < array.size(); j++)
            {
                if(array[j] % 2 !=0 && array[j] < array[i])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }   
        return array;
    }
};

int main()
{
    Kata kata; 
    // std::vector<int> array = {5, 3, 2, 8, 1, 4}; //1 3 2 8 5 4
    std::vector<int> array = {5, 3, 2, 8, 1, 4 }; //1 3 2 8 5 4
    std::vector<int> sortedArray = kata.sortArray(array);
    for(int num : sortedArray)
    {
        std::cout << num << " ";
    }
    return 0;
}