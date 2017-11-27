// C++ program to demonstrate working of clear()
// and empty()
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str("GeeksforGeeks");

	// clearing string
	str.clear();

	// Checking if string is empty
	(str.empty()==1)?
		cout << "String is empty" << endl:
		cout << "String is not empty" << endl;

	return 0;

}
