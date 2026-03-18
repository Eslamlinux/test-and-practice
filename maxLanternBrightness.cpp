#include <iostream>
#include <vector>

int maxLanternBrightness(std::vector<int> brightness) { 
//     int result = 0;
//     for(int c: brightness)
//     {
//         result += c;
//     }
//     return result;
// }

if (brightness.empty()) {
        return 0;
    }
    
    int max_so_far = brightness[0]; 
    int current_max = brightness[0]; 

    for (size_t i = 1; i < brightness.size(); ++i) {
        
        current_max = std::max(brightness[i], current_max + brightness[i]);
        
        max_so_far = std::max(max_so_far, current_max);
    }
    
    return max_so_far;
}

int main()
{
    std::cout << maxLanternBrightness({5,6,7}) <<std::endl;
    std::cout << maxLanternBrightness({10, -3, 5, -2, 6}) <<std::endl;
    std::cout << maxLanternBrightness({-1, -2, -3}) <<std::endl;

    return 0;
}