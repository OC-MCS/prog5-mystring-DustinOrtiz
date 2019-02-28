
//===========================
// Dustin Ortiz
// 1 March 2019
// Programming Assignment #5
// Description: MyString
//===========================

#pragma once
using namespace std;

class MyString
{
	private:
		char *str; // pointer to char
	public:
		MyString(); // default constructor
		MyString(const char *); // constructor
		MyString(const MyString &); // copy constructor
		~MyString(); // destructor
		MyString operator=(const MyString &); // overloaded assignment operator
		MyString operator+(const MyString &); //overloaded + operator
		bool operator==(const MyString &); // overloaded == operator
		char *c_str() const; // getter function
};

ostream &operator<<(ostream &, const MyString &); //output << operator