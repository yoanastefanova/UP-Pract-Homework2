// week08_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


 

bool PrimeNum(int num1, int num2)
{
	//bool isPrime = true;
	int counter1 = 0;
	int counter2 = 0;

	for (int i = 2; i <= num1; i++)
	{
		if (num1%i == 0) counter1++;
	}

	for (int i = 2; i <= num2; i++)
	{
		if (num2%i == 0) counter2++;
	}

	if (counter1 > 1) return false;
	else if (counter2 > 1)return false;
	else return true;
}


int DoublePrimeNums(int num1, int num2)
{
	//PrimeNum();
	if ((PrimeNum(num1,num2) ) && (num1 + 2 == num2)) return true;
	else  return false;
}



/*
bool result(int DoublePrimeNums, int PrimeNum)
{
	int PrimeNum(int num1, int num2);
	int DoublePrimeNums(int num1, int num2);
}
*/




int main()
{
	int a, b;
	cin >> a >> b;

	cout <<"The numbers are relatively prime: "<< DoublePrimeNums(a,b)<<endl;

    return 0; 
}

