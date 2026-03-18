/*
Some new cashiers started to work at your restaurant.

They are good at taking orders, but they don't know how to capitalize words, or use a space bar!

All the orders they create look something like this:

"milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza"

The kitchen staff are threatening to quit, because of how difficult it is to read the orders.

Their preference is to get the orders as a nice clean string with spaces and capitals like so:

"Burger Fries Chicken Pizza Pizza Pizza Sandwich Milkshake Milkshake Coke"

The kitchen staff expect the items to be in the same order as they appear in the menu.

The menu items are fairly simple, there is no overlap in the names of the items:

1. Burger
2. Fries
3. Chicken
4. Pizza
5. Sandwich
6. Onionrings
7. Milkshake
8. Coke
*/

#include <iostream>
#include <string>
#include <algorithm>

	std::string get_order(const std::string &order) {
		std::string Main_Menu[8] = {"Burger","Fries","Chicken","Pizza","Sandwich","Onionrings","Milkshake","Coke"};
		std::string result ;
		std::string temp ;
 		for(int i = 0; i < 8; i++)
		{
			temp = tolower(Main_Menu[i][0]);
			temp += Main_Menu[i].substr(1);
			for(int t = 0; t < order.size(); t++)
			{
				if(order.substr(t, Main_Menu[i].size()) == temp)
				{
						result += Main_Menu[i]+ " " ;
					t += Main_Menu[i].size() - 1;
				}
			}
			temp = "";
		}
		return result.substr(0, result.size() - 1);
	}

int main()
{
	std::string re = "milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza";
 std::cout << get_order(re);

 return 0;
}
