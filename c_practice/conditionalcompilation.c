#include<stdio.h>

/*
#if(condtion)
{
body
}
#ifel(condtion)
{
body
}
#else

/////////////
#ifdev
#else
#endif

/////////////
#ifndev
#else
#endif

////////// examp most use for ///////
أ. التوافق مع أنظمة التشغيل (Cross-Platform)
#ifdef _WIN32
    // كود خاص بنظام ويندوز فقط
#elif __linux__
    // كود خاص بنظام لينكس فقط
#endif

ب. حراس التضمين (Header Guards)
#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

// محتويات الملف هنا

#endif

ج. وضع التصحيح (Debug Mode)
#define DEBUG_MODE 1

#if DEBUG_MODE
    printf("Debug: The value of x is %d", x);
#endif


*/

    int add(int,int);

void main()
{
    int a = 10;
    //normal condition == greater
    printf("normal condition a = 10\n");
    if(a >= 10)
    printf("greater\n");
    else if(a < 10)
    printf("lees\n");
    else
    //nothing

    //conditional comilation befor macro == lees becuase var not yet set and it work only with define macros هذا لان البرنامج في حالة المعالجة المسبقة لا يري المتغيرات لانه لم تحجز بعد
    printf("conditional comilation befor macro a = 10\n");
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");
    #else
    //nothing
    #endif
    //conditional comilation after macro
    printf("conditional comilation after macro a = 10\n");
    #define a 10
    #if(a >= 10)
        printf("greater\n");
    #elif (a <10)
        printf("lees\n");
    #else
    //nothing
    #endif

    typedef int integer;

    #define index = 100;
    
    #ifdef index 
    printf("index define\n");
    #endif

    #ifndef ERORR
    #define ERORR 1
    #endif


    #if ERORR
    printf("erorr 1\n");
    printf("erorr vall = %d \n",ERORR);
    #endif

    // printf("add %d + %d = %d\n",10,20,add(10,20));



}

int add(int f,int t)
{
    return f + t;
}