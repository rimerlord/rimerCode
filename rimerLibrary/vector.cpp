// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  vector<int> first;                                // empty vector of ints
  vector<int> second (4,100);                       // four ints with value 100
  vector<int> third (second.begin(),second.end());  // iterating through second
  vector<int> fourth (third);                       // a copy of third

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  cout << "The contents of fifth are:";
  for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  
  //begin, end and push_back
  vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  
  //insert()
  vector<int> myvector2 (3,100);
  vector<int>::iterator it;

  it = myvector2.begin();
  it = myvector2.insert ( it , 200 );

  myvector2.insert (it,2,300);

  // "it" no longer valid, get a new one:
  it = myvector2.begin();

  vector<int> anothervector (2,400);
  myvector2.insert (it+2,anothervector.begin(),anothervector.end());

  int myarray [] = { 501,502,503 };
  myvector2.insert (myvector2.begin(), myarray, myarray+3);

  cout << "myvector2 contains:";
  for (it=myvector2.begin(); it<myvector2.end(); it++)
    cout << ' ' << *it;
  cout << '\n';
  
  //clear()
  vector<int> myvector3;
  myvector3.push_back (100);
  myvector3.push_back (200);
  myvector3.push_back (300);

  cout << "myvector3 contains:";
  for (unsigned i=0; i<myvector3.size(); i++)
    cout << ' ' << myvector3[i];
  cout << '\n';

  myvector3.clear();
  myvector3.push_back (1101);
  myvector3.push_back (2202);

  cout << "myvector3 contains:";
  for (unsigned i=0; i<myvector3.size(); i++)
    cout << ' ' << myvector3[i];
  cout << '\n';
  
  //erase()
  vector<int> myvector4;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) myvector4.push_back(i);

  // erase the 6th element
  myvector4.erase (myvector4.begin()+5);

  // erase the first 3 elements:
  myvector4.erase (myvector4.begin(),myvector4.begin()+3);

  cout << "myvector4 contains:";
  for (unsigned i=0; i<myvector4.size(); ++i)
    cout << ' ' << myvector4[i];
  cout << '\n';
  return 0;
}