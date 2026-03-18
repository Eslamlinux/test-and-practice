#include <iostream>
#include <vector>

int coins_combinations(int amount,std::vector<int> coins) {
std::vector<long long> dp(amount + 1,0);
dp[0] = 1;
for(int co :coins)
{
    for(int i = co; i <= amount; ++i)
    {
        dp[i] += dp[i - co];
    }
}
return (int)dp[amount];
}

int main()
{
    std::cout << coins_combinations(10,{2,5}) <<std::endl;
    std::cout << coins_combinations(4,{1,2}) <<std::endl;
    std::cout << coins_combinations(10,{5,2,3}) <<std::endl;
    std::cout << coins_combinations(0,{3,5,7}) <<std::endl;
    std::cout << coins_combinations(11,{5,7}) <<std::endl;
    return 0;
}
