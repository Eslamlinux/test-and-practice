#include <iostream>
#include <set>
// #include <bits/stdc++.h>
#include <vector>
int getBiggestShared(std::vector<int> a,std::vector<int> b) { 
    std::set<int , std::greater<int>> firstarr(a.begin(),a.end());
    int result =0;
    std::set<int, std::greater<int>>::iterator it;
    for(int c : b)
    {
        auto myf = firstarr.find(c);
        if(*myf > result )
        result = *myf;
    }
    return result;
}

int main()
{
    std::cout << getBiggestShared({90, 95},{90, 95}) << std::endl;
    std::cout << getBiggestShared({10, 2, 3, 12, 3},{54, 12, 33, 1}) << std::endl;

    return 0;
}