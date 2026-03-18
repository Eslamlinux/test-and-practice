#include <stdio.h>

void main()
{
	typedef long int lt;
	typedef signed si;
	typedef unsigned usi;
	printf("size of int = %d \n",sizeof(int));
	printf("size of doble = %d \n",sizeof(double));
	printf("size of float = %d \n",sizeof(float));
	printf("size of char= %d \n",sizeof(char));
	printf("size of long int = %d \n",sizeof(lt));
	printf("size of long signed = %d \n",sizeof(si));
	printf("size of long unsigned = %d \n",sizeof(usi));
	//printf("size of bool = %d \n",sizeof(bool));

}
