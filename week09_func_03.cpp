// week09_func_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void factorials(int * arr, int elements)
{
	
	for (int i = 0; i < elements; i++)
	
	{
		cin >> arr[i];
		int factorial = 1;
		{
			for (int j = 1; j <= arr[i]; j++)
			{
				factorial = factorial * j;
			}
			
		}
		cout << factorial << endl;
	}


}



int main()
{
	int arr[SIZE];
	int elements;
	cin >> elements;

	
	factorials(arr, elements);


    return 0; 
}

