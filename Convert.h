//////////////////////////////////////////////////////////////////////////////////////////////
// FileName:    Convert.h
// Description: Definition of class convert that converts a number into decimal from any base.
//              Member functions are defined in convert.cpp
// Author:      Smruti Tatavarthy (SUID-570229070)
// Project:     Conversion(Programming in C++)
/////////////////////////////////////////////////////////////////////////////////////////////

#include <string> // program uses C++ standard string class
using namespace std;

// Convert class definition
class Convert
{

public:
	int convertToDecimal();// constructor initializes conversion
private:
	void displayMessage();// display a welcome message

}; // end class Convert