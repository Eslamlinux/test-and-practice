#include <stdio.h>
#include <stdlib.h>


void main()
{
    int* array;
    array =(int *)malloc(4*sizeof(int));
    array[0] = 10;
    array[1]=5;
    array[2]=44;
    array[3]=44;
    printf("print array[0]: %d | array[1]: %d\n",array[0],array[1]);

    char* Array;
    Array = (char *)malloc(6*sizeof(char));
    Array = "eslam";
    printf("print array string: %s\n",Array);

    int* arrayc;
    arrayc = (int*)calloc(2,sizeof(int));
    printf("try to print empty arrary = %d\n",arrayc[0]);
    arrayc[1] = 99;
    printf("print arraryc[1] = %d\n",arrayc[1]);

    char* Arrayc;
    Arrayc = (char*)calloc(6,sizeof(char));
    Arrayc = "linux";
    printf("print arrayc string: %s\n",Arrayc);

    array = realloc(array,11*sizeof(int));
    printf("array after realloc %d\n",array[2]);


    free(array);
    free(arrayc);
  
}



