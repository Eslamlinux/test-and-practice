#include <stdio.h>
typedef int integer;
// #define typedef struct 
#define pf printf

struct {
integer test;
}st;
struct {
    int n ;

} st2;

void main()
{
    st.test =5;
    st2.n = 100;

    integer a = 9;
    pf("struct vall %d int vall %d\n",st.test ,a);

    integer b = 3;
    pf("int = %d\n",b);

    char sdate[] =__DATE__ ;
    pf("__file__ = %s\n",__FILE__);
    pf("__DATE__ = %s\n",__DATE__);
    pf("date = %s\n",sdate);
    pf("__TIME__ = %s\n",__TIME__);
    pf("line number: %d\n", __LINE__);


}
