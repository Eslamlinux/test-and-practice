/*
A bookseller has lots of books classified in 26 categories labeled A, B, C, ..., Z. Each book has a code of at least 3 characters. The 1st character of a code is a capital letter which defines the book category.

In the bookseller's stocklist each code is followed by a space and by a positive integer, which indicates the quantity of books of this code in stock.
Task
You will receive the bookseller's stocklist and a list of categories. Your task is to find the total number of books in the bookseller's stocklist, with the category codes in the list of categories. Note: the codes are in the same order in both lists.

Return the result as a string described in the example below, or as a list of pairs (Haskell/Clojure/Racket/Prolog).

If any of the input lists is empty, return an empty string, or an empty array/list (Clojure/Racket/Prolog).

Example
# the bookseller's stocklist:
"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"

# list of categories: 
"A", "B", "C", "W"

# result:
"(A : 20) - (B : 114) - (C : 50) - (W : 0)"

https://www.codewars.com/kata/54dc6f5a224c26032800005c/train/cpp
"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"

*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class StockList
{
public:
  static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
  {
    if(lstOfArt.empty() || categories.empty())
    return "";
     std::string result ;
     for(int i = 0; i < categories.size();i++)
     {
        int temp = 0;
        result += "(" + categories[i] + " : ";
      for(int ls = 0; ls < lstOfArt.size(); ls++)
        {
        if(categories[i][0] == lstOfArt[ls][0])
          {
          std::string stemp;
          for(char c : lstOfArt[ls])
          {
            if(isdigit(c))
            stemp += c;
          }
          temp += stoi(stemp);
        }
      }
      result += std::to_string(temp) + ") - ";
      
    }
    result.pop_back();
    result.pop_back();
    result.pop_back();
    return result;
  }
};

int main()
{
  std::vector<std::string>lst = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
  std::vector<std::string>cat = {"A", "B"};
  StockList s;
  std::cout << s.stockSummary(lst,cat) << std::endl;

}