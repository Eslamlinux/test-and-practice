//calculateEmpowermentIndex
#include <iostream>
#include <vector>

float calculateEmpowermentIndex(std::vector<float> achievements,std::vector<float> weights) { 
    float sum = 0.0;
    float sumW = 0.0;
    for(int i =0 ; i < achievements.size(); i++)
    {
        achievements[i] = achievements[i] * weights[i];
        sum += achievements[i];
        sumW += weights[i];
    }

    return sum / sumW;
}

int main()
{

    std::cout << calculateEmpowermentIndex({8, 7, 9},{1,1,1}) <<std::endl;
    std::cout << calculateEmpowermentIndex({10,10,10},{1,1,1}) <<std::endl;
    std::cout << calculateEmpowermentIndex({5,6,7},{2,3,5}) <<std::endl;
    return 0;
}