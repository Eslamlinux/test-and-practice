#include <iostream>
#include <vector>

/*
[

1,

1, 1,

1, 2, 1,

1, 3, 3, 1,

1, 4, 6, 4, 1

]
1 1 1 1 2 1 1 3 1
*/

// std::vector<int> generatePascalsTriangle(int numRows) 
// { 
//     std::vector<int>result;
//     for(int i = 0; i < numRows;i++) // 3
//     {
//         result.push_back(1);
//         if(i > 0)
//         {
//             for(int t = i;t < i+1;t++)
//             {
//                 result.push_back(t);

//             }
//         }
//         if(i > 1)
//         result.push_back(1);

//     }
//     return result;
// }

std::vector<int> generatePascalsTriangle(int numRows) {
    std::vector<std::vector<int>> triangle;
    std::vector<int> result;

    for (int i = 0; i < numRows; i++) {
        std::vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
        
        for (int val : row) {
            result.push_back(val);
        }
    }
    return result;
}

int main()
{
    for(int c :generatePascalsTriangle(5))
    {
        std::cout << c << " ";
    }

    return 0;
}