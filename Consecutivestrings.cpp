/*
You are given an array(list) strarr of strings and an integer k. Your task is to return the first longest string consisting of k consecutive strings taken in the array.

Examples:
strarr = ["tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"], k = 2

Concatenate the consecutive strings of strarr by 2, we get:

treefoling   (length 10)  concatenation of strarr[0] and strarr[1]
folingtrashy ("      12)  concatenation of strarr[1] and strarr[2]
trashyblue   ("      10)  concatenation of strarr[2] and strarr[3]
blueabcdef   ("      10)  concatenation of strarr[3] and strarr[4]
abcdefuvwxyz ("      12)  concatenation of strarr[4] and strarr[5]

Two strings are the longest: "folingtrashy" and "abcdefuvwxyz".
The first that came is "folingtrashy" so 
longest_consec(strarr, 2) should return "folingtrashy".

In the same way:
longest_consec(["zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"], 2) --> "abigailtheta"
n being the length of the string array, if n = 0 or k > n or k <= 0 return "" (return Nothing in Elm, "nothing" in Erlang).

Note
consecutive strings : follow one after another without an interruption


*/
#include <iostream>
#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k)
    {
        if(strarr.empty() || k > strarr.size() || k < 0) return "";
        size_t size_to = strarr.size() - k;
        std::string result = "";
        for(int i = 0; i <= size_to; i++)
        {
            std::string temp = "";
            for(int time = 0; time < k ; time++)
            {
                temp += strarr[i+time];
            }
            if(temp.size() > result.size() )
            {
                result = temp;
            }
        }
        return result;
    }
};

int main()
{
    LongestConsec opj;
    std::string res = opj.longestConsec({"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"},2);
    std::cout << res << std::endl ;
    res = opj.longestConsec( {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"},1);
    std::cout << res << std::endl ;

    return 0;
}