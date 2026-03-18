#include <iostream>
#include <unordered_set>
#include <set>
#include <vector>
std::vector<int> remove_duplicate(std::vector<int> arr) { 
// std::set<int> toset(arr.begin(),arr.end());
// return {toset.begin(),toset.end()};

// std::set<int> tosets(arr.begin(),arr.end());
// std::vector<int> result(tosets.begin(),tosets.end());
// return result;

// std::unordered_set<int> toset(arr.begin(),arr.end());
// return {toset.begin(),toset.end()};

// std::set<int> toset(arr.begin(),arr.end());
// std::vector<int> result;
// for(auto a: arr)
// {
//     for(auto t:toset)
//     {
//         if(a == t && result.size() < toset.size())
//         {
//             result.push_back(a);
//             break;
//         }
//     }
// }
// return result;

// for(int a = 0; a <arr.size() ;a++)
// {
//     for(int i = 1+a ; i < arr.size(); i++)
//     {
//         if(arr[a] == arr[i])
//         {
//             arr.erase(arr.begin()+i);
//         }
//     }
// }
// return arr;
// }
    std::vector<int> result; 
    std::unordered_set<int>seen;
    for (int element : arr) {
        if (seen.find(element) == seen.end()) {
            seen.insert(element);
            result.push_back(element);
        }
    }
    return result;
}

int main()
{
    for(auto c : remove_duplicate({7,8,9,7}))
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
        for(auto c : remove_duplicate({100, 101, 102, 100}))
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
        for(auto c : remove_duplicate({12,3}))
    {
        std::cout << c << " ";
    }
        std::cout << std::endl;
        for(auto c : remove_duplicate({10, -10, -10, 10}))
    {
        std::cout << c << " ";
    }
}