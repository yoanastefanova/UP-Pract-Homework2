// week09_func_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;


void populate(int* arr, int size)
{
	for(int i = 0; i <size; ++i)
	{
		cin >> arr[i];
	}
}

void print(int* arr, int size)
{
	
	for (int i = 0; i < size/2; ++i)
	{
			int helper = arr[i];
			arr[i] = arr[size-1 - i];
			arr[size - 1 - i] = helper;
			
			
	}

	cout << "The reversed numbers' order is: ";

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i];
	}
	
}
int main()
{
	int arr[SIZE];
	int elements;
	cin >> elements;
	
	populate(arr,elements);
	print(arr, elements);
	
	return 0;
}

