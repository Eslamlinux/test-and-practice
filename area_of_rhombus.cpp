#include <iostream>
#include <string>

float area_of_rhombus(float& q,float& p) { 
std::string temp = std::to_string( q * p / 2.0f);
if(temp.size() >= 5)
temp.erase(5);
return stof(temp);
// return q * p / 2.0;
}


// float area(float&a ,float& b)
// {
// return a * b / 2.0;
// }
// float area_of_rhombus(float& q,float& p) { 
// return area(q,p);
// }

int main() 
{
    float diagonal1 , diagonal2;
    if (!(std::cout << "enter float A: " ,std::cin >> diagonal1 ,std::cout << "float B: " ,std::cin>> diagonal2)) {
        return 1; 
    }
    float result_area = area_of_rhombus(diagonal1, diagonal2);
    std::cout << result_area << std::endl;

    return 0;
}