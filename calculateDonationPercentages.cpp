// calculate Donation Percentages
#include <iostream>
#include <vector>
#include <cmath>
std::vector<std::string> calculateDonationPercentages(std::vector<std::string> names,std::vector<float> donations) 
{
    std::vector<std::string> result;
    float totalSum = 0.0f;

    for (float amount : donations) {
        totalSum += amount;
    }

    for (size_t i = 0; i < names.size(); i++) {
        int percentage = std::round((donations[i] / totalSum) * 100);
        result.push_back(names[i] + ": " + std::to_string(percentage) + "%");
    }

    return result;
}
int main()
{
    // 'فاطمة: 50%, علي: 50%
    // std::vector<std::string> na {"فاطمة", "علي", "خالد"};
    // std::vector<float> fl {50.0, 25.0, 25.0};

        std::vector<std::string> na {"فاطمة", "علي"};
    std::vector<float> fl {100, 100};

    for(auto c : calculateDonationPercentages(na,fl))
    {
        std::cout << c<< " ";
    }

}