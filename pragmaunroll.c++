/*
 * pragmaunroll.c++
 *
 *  Created on: Nov 6, 2025
 *      Author: eslam
 */
#include <iostream>

template<typename diff>
diff arr(diff a[])
{
	for(int i = 0 ;i<9 ;i+=3)
	{
		a[i] *= 1;
		a[i+1] *= 2;
		a[i+2] *= 3;
	}

		for(int t = 0; t < 9 ;t++)
		{
			std::cout << a[t] <<std::endl;
		}

}


//int main()
//{
//
//	int es[]= {1,2,3,4,5,6,7,8,9};
//
//	arr(es);
//
//return 0;
//}


