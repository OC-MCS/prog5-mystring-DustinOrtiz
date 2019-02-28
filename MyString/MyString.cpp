
//===========================
// Dustin Ortiz
// 1 March 2019
// Programming Assignment #5
// Description: MyString
//===========================

#include <iostream>
#include <cstring>
#include <ostream>
#include "MyString.h"
using namespace std;

//========================================================
// MyString: Sets default constructor if nothing is given.
// Parameters:
// None.
// Return Type: None.
//========================================================

MyString::MyString()
{
	str = nullptr; // orginal data of str if nothing is given.
}

//==================================================
// MyString: Sets constructor if something is given.
// Parameters:
// None.
// Return Type: None.
//==================================================

MyString::MyString(const char *other)
{
	int length = strlen(other) + 1; // Length of other.
	str = new char[length]; // data of str when given data.
	strcpy_s(str, length, other);
}

//=====================================================
// MyString: Sets copy constructor if a copy is needed.
// Parameters:
// None.
// Return Type: None.
//=====================================================

MyString::MyString(const MyString &other)
{
	int length = strlen(other.str) + 1; // Length of other.str.
	str = new char[length]; // copied data of other.str.
	strcpy_s(str, length, other.str);
}

//=======================================
// MyString: Sets destructor when needed.
// Parameters:
// None.
// Return Type: None.
//=======================================

MyString::~MyString()
{
	delete[] str;
}

//=================================================================
// MyString operator(=): Used to set Mystrings equal to each other.
// Parameters:
// other: What MyString is.
// Return Type: *this.
//=================================================================

MyString MyString::operator=(const MyString &other)
{
	int length; // Length of other.str.

	if (this != &other)
	{
		delete[] str;
		length = strlen(other.str) + 1;
		str = new char[length]; // New str.
		strcpy_s(str, length, other.str);
	}

	return *this; // Returns this.
}

//======================================================
// MyString operator(+): Used to add Mystrings together.
// Parameters:
// other: What MyString is.
// Return Type: MyString (words).
//======================================================

MyString MyString::operator+(const MyString &other)
{
	MyString words; // New Mystring.

	int length1 = strlen(str) + 1; // Length of str.
	int length2 = strlen(other.str) + 1; // Length of other.str.
	int length3 = length1 + length2; // Length of str and other.str.

	char *word = new char[length3];  // New MyString data.

	strcpy_s(word, length3, str);
	strcat_s(word, length3, " ");
	strcat_s(word, length3, other.str);

	words = word;

	return words; // Returns new MyString.
}

//====================================================================
// MyString operator(==): Used to see if Mystring is equal to another.
// Parameters:
// other: What MyString is.
// Return Type: bool (equals.
//====================================================================

bool MyString::operator==(const MyString &other)
{
	bool equals; // Determines if MyStrings are equal to each other.

	if (str == nullptr && other.str == nullptr)
	{
		equals = true;
	}
	else if (str == nullptr || other.str == nullptr)
	{
		equals = false;
	}
	else if (strcmp(str, other.str) == 0)
	{
		equals = true;
	}
	else
	{
		equals = false;
	}
	
	return equals; // Returns if equal or not.
}

//=======================================================
// MyString c_str(): Used to get private data from class.
// Parameters:
// None.
// Return Type: *char (str).
//=======================================================

char* MyString::c_str() const
{
	return str; // Returns str.
}

//==================================================
// MyString operator(<<): Used to display MyStrings.
// Parameters:
// str: what original Mystring is.
// other: What MyString is.
// Return Type: str.
//==================================================

ostream &operator<<(ostream &str, const MyString &other)
{
	if (other.c_str() == nullptr)
	{
		str << "";
	}
	else
	{
		str << other.c_str();
	}

	return str; // Returns str.
}