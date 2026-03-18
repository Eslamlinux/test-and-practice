

#include <iostream>

class Counter_from_to_{
    public:
int result =0;

    Counter_from_to_(int start, int end) {
    if (start > end) {
        return ; 
    }
    for (int i = start; i <= end; ++i) {
        result = i ;
    }
    }
};

int main()
{
    
   Counter_from_to_ lest(1,10);

   std::cout << lest.result;

    return 0;
}