// week09_pointers_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void TurnedArr(int * arr, int elements)
{

	for (int i = 0; i < elements; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < elements; i++)
	{
		cout << arr[elements - 1-i];

	}
	
}



int main()
{
	int elements;
	int arr[SIZE];
	
	cin >> elements;

	TurnedArr(arr, elements);


    return 0; 
}

