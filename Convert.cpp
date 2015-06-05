/////////////////////////////////////////////////////////////////////////////////
// FileName:    Convert.cpp
// Description: Defines the member functions provided in the interface convert.h.
// Author:      Smruti Tatavarthy (SUID-570229070)
// Project:     Conversion(Programming in C++)
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include "Convert.h" // include definition of class Convert
using namespace std;

void displayMessage()
{
	cout << " Welcome to Number Conversion " << endl;
}

int Convert::convertToDecimal()
{
	void displayMessage();// display a welcome message

	int no = 0;
	int base = 0;
	cout << " Welcome to Number conversion\n " << endl;
	cout << " \n Enter a number: "; 
	cin >> no;
	cout << " \n Enter the base: ";
	cin >> base;
	int a[1000];
	int digit = 0;

	int i = 0, sum = 0, j = 0,k=0;

	while (no > 0)
	{
		digit = no % 10; //modulus operand for extracting the integers
		a[i] = digit; //use of array to store the indiviual integers
		if (a[i] < base) //checking for invalid number by comparing to the base
		{
			i++;
			no = no / 10; //division operand for extracting the integers
		}
		else
		{
			cout << "\n Number " << no << " is invalid for the base " <<base << "\n"; //Error message
			return 0;
		}
	}
	for (k = 0; k< i; k++)
	{
		sum = sum + a[k] * pow(base, j); //calculating the value of the number in decimal
		j++;
	}
	return sum;
}