﻿// EX04_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 20/20

int findSmallest(int* a, int s)
{
	//PT -- better: int small = a[0];
	int small = 100;
	for (int i = 0; i < s; i++)
	{
		if (a[i] < small)
			small = a[i];
		//PT -- don't need this else statement at all
		else
			small = small;
	}
	return small;

}

int main()
{
	int array1[8] = { 1,2,4,5,10,100,2,-22 };
	
	int smallest = findSmallest(array1, 8);
	cout << smallest;

    return 0;
}

