#include <iostream>
#include <string>
int siz ;
struct arr
{
    int* sumoftow ;
    arr()
    {
        sumoftow = new int[siz];
    }
 int* arrfunc(int ar[],int ar2[])
{
    for(int i = 0 ; i < siz; i++)
    {
        sumoftow[i] = ar[i] + ar2[i];  
    }
    
    return sumoftow;
}
int* begin(){return sumoftow;}
int* end(){return sumoftow+ siz;}
~arr()
{
    delete []sumoftow;
}
};
int main()
{
    arr e;
    int a[]= {2,5,8};
    int b[]= {2,5,8};
    siz = sizeof(a)/sizeof(a[0]);
    e.arrfunc(a,b);
    for(int c:e)
    {
        std::cout << c << " ";
        
    }

}