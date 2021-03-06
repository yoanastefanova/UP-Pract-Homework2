// week09_func_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


const int ROWS = 100;
const int COLS = 100;


void populate(int matrix[ROWS][COLS], int  rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
		//cout << endl;
	}
}
/*
void print(int matrix[ROWS][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
		}	
		cout << endl;
	}
} 
*/

void EvenAndOddNums(int matrix[ROWS][COLS], int rows, int cols)
{
	int counterEven = 0;
	int counterOdd = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] % 2 == 0) counterEven++;
			else if (matrix[i][j]) counterOdd++;
		}
	}
	cout << "The number of the even numbers is: "<<counterEven << endl;
	cout <<"The number of the odd numbers is: "<< counterOdd;
}

int main()
{
	int matrix[ROWS][COLS];
	int rowss, colss; 
	cin >> rowss >> colss;
	populate(matrix, rowss, colss);
	EvenAndOddNums(matrix, rowss, colss);

	return 0;
}

