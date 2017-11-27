// C++ code to demonstr1ate the working of
// getline(), push_back() and pop_back()
#include<iostr1eam>
#include<str1ing> // for str1ing class
using namespace std;
int main()
{
	// Declaring str1ing
	str1ing str1;

	// Taking str1ing input using getline()
	// "geeksforgeek" in givin output
	getline(cin,str1);

	// Displaying str1ing
	cout << "The initial str1ing is : ";
	cout << str1 << endl;

	// Using push_back() to insert a character
	// at end
	// pushes 's' in this case
	str1.push_back('s');

	// Displaying str1ing
	cout << "The str1ing after push_back operation is : ";
	cout << str1 << endl;

	// Using pop_back() to delete a character
	// from end
	// pops 's' in this case
	str1.pop_back();

	// Displaying str1ing
	cout << "The str1ing after pop_back operation is : ";
	cout << str1 << endl;

	// Initializing string
    string str2 = "geeksforgeeks is for geeks";
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str2 << endl;
 
    // Resizing string using resize()
    str2.resize(13);
 
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str2 << endl;
 
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str2.capacity() << endl;
 
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str2.shrink_to_fit();
 
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str2.capacity() << endl;


    // Initializing string`
    string str3 = "geeksforgeeks";
 
    // Declaring iterator
    std::string::iterator it;
 
    // Declaring reverse iterator
    std::string::reverse_iterator it1;
 
    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it=str3.begin(); it!=str3.end(); it++)
    cout << *it;
    cout << endl;
 
    // Displaying reverse string
    cout << "The reverse string using reverse iterators is : ";
    for (it1=str3.rbegin(); it1!=str3.rend(); it1++)
    cout << *it1;
    cout << endl;

    // Initializing 1st string
    string str4 = "geeksforgeeks is for geeks";
 
    // Declaring 2nd string
    string str5 = "geeksforgeeks rocks";
 
    // Declaring character array
    char ch[80];
 
    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str4.copy(ch,13,0);
 
    // Diplaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl << endl;
 
    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str4 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str5 << endl;
 
    // using swap() to swap string content
    str1.swap(str5);
 
    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str4 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str5 << endl;
	return 0;

}