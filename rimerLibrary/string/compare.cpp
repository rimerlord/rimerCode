// C++ program to demonstrate use of compare()
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str("GeeksforGeeks");
	string str1("GeeksforGeeks123");
	
	cout <<  str.compare(str1) << endl;

	// Comparing strings using compare()
	if ( str.compare(str1) == 0 )
		cout << "Strings are equal";
	else
		cout << "Strings are unequal";
	return 0;
}
