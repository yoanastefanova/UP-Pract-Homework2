// week08_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <math.h>
#include <iostream>
using namespace std;

int mainFunction(int x)
{
	return (pow(x, 3) - 5 * x);
}

int functionH(int a, int b, int n)
{
	return (b - a) / n;
}

double Integral(int a, int b, int n)
{
	int sum = 0;
	int xi;
	int x = a;

	for (int i = 0; i < n; i++)
	{
		xi = x + functionH(a, b, n);
		sum = sum + (functionH(a, b, n) / 2) *(mainFunction(x) + mainFunction(xi));
		x = xi;
	}
	return sum;
}


int main()
{
	int a, b, x;
	cin >> x;
	cout << "Enter the first end of the space: ";
	cin >> a;
	cout << "Enter the second end of the space: ";
	cin >> b;

	cout << mainFunction(x);


    return 0; 
}

