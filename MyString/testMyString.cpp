
//===========================
// Dustin Ortiz
// 1 March 2019
// Programming Assignment #5
// Description: MyString
//===========================

#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

int main()
{
	cout << "Cout MyString: " << endl;
	MyString s1; // MyString with nothing given.
	cout << "s1: " << s1 << endl;
	MyString s2("billy"); // MyString given the data billy.
	cout << "s2: " << s2 << endl;
	MyString s3(s2); // MyString given data MyString which is billy.
	cout << "s3: " << s3 << endl;
	char a[] = "hello"; // char array given hello.
	MyString s4(a); // MyString given a char array which is hello.
	cout << "s4: " << s4 << endl;
	MyString s5; // MyString given nothing.

	s1 = s2;
	s1 = s2 = s3;
	s1 = s1;
	s1 = "jimmy";

	cout << "\nBefore assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1 = s2;
	cout << "After assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	s5 = s4 + s2;

	cout << "\nAdding Mystrings: " << endl;
	cout << "s5: " << s5 << endl;

	cout << "\nEqualing MyStrings: " << endl;
	if (s2 == s3)
	{
		cout << s2 << " and " << s3 << " are Equal!!!" << endl;
	}
	else
	{
		cout << s2 << " and " << s3 << " are Not Equal!!!" << endl;
	}

	if (s4 == s2)
	{
		cout << s4 << " and " << s2 << " are Equal!!!" << endl;
	}
	else
	{
		cout << s4 << " and " << s2 << " are Not Equal!!!" << endl;
	}

	return 0;
}