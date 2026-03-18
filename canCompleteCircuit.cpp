#include <iostream>
#include <vector>

int ca(std::vector<int> gas,std::vector<int> cost)
{
   int startindex = 0,current_tank =0 ,totalfuel = 0;
    for(int i = 0; i < gas.size();i++)
    {
        int net_gain =  gas[i] - cost[i];
        current_tank += net_gain;
        totalfuel += net_gain;
        if(current_tank < 0)
        {
        startindex = i+1;
        current_tank = 0;
        }
    }
return totalfuel >=  0? startindex : -1;
}
int main()
{
    std::vector<int>gg = {1,2,3,4,5};
    std::vector<int>co = {3,4,5,1,2};
	std::cout << ca(gg,co) << std::endl;   


return 0;
}
