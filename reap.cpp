#include <iostream>
// insted for loob implemant reap
#define reap(x) for(int i=0 ,s = x; i < s; i++)
#define dow(i,x) for(int i=0 ,s##i = x; i < s##i; i++)
#define cerc(i,x) for(int i=0 ; i < x; i++)
int main()
{

 reap(5) //dont use it nested because will be confelct with var
{
  
        std::cout << "Hello Reap \n";

}
dow(o,2)
{
        std::cout << "Hello dow \n";
}
cerc(p,2)
{
        std::cout << "Hello cerec \n";

}
    return 0;
}