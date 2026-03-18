#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

float top3Average(vector<int> scores) { 
    int size = scores.size();
    if (size == 0)
    return 0.0f;
    sort(scores.begin(),scores.end(),greater<int>());
    int count = std::min(size, 3);
    long long sum = 0;
    for (int i = 0; i < count; ++i) 
    {
        sum += scores[i];
    }
    return (float) sum / count;
}
