//////////////////////////////////////////////////////////////////////////////////
// FileName:    Convert.cpp
// Description: Defines the member functions provided in the interface convert.h.
// Author:      Smruti Tatavarthy (SUID-570229070)
// Project:     Conversion(Programming in C++)
/////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
#include "Convert.h" // include definition of class Convert
using namespace std;

int main()
{
	int finalNum = 0;
	
	Convert convert; //
	finalNum = convert.convertToDecimal();
	if (finalNum!=0)
		cout << "\n The Decimal value of the number is : " <<finalNum<<endl;
}


	

	
