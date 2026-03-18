#include <iostream>
#include <vector>
using namespace std;
int countSmileys(vector<string> arr)
{
    int resultCount = 0;
    for (string cur : arr) {
        if (
            (cur.length() == 2 &&
                (cur[0] == ':' || cur[0] == ';') &&
                (cur[1] == ')' || cur[1] == 'D'))
            ||
            (cur.length() == 3 &&
                (cur[0] == ':' || cur[0] == ';') &&
                (cur[1] == '-' || cur[1] == '~') &&
                (cur[2] == ')' || cur[2] == 'D'))
        ) {
            resultCount++;
        }
    }
    return resultCount;
}


int main() {
    vector<string> arr = {":)", ":D", ";-D", ":~)", ":~D", ":~"};
    cout << countSmileys(arr) << endl; // Output: 5
    return 0;
}
