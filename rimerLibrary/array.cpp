// constructing arrays
#include <iostream>
#include <array>

// default initialization (non-local = static storage):
std::array<int,3> global;               // zero-initialized: {0,0,0}

int main ()
{
  // default initialization (local = automatic storage):
  std::array<int,3> first;              // uninitialized:    {?,?,?}

  // initializer-list initializations:
  std::array<int,3> second = {10,20};   // initialized as:   {10,20,0}
  std::array<int,3> third = {1,2,3};    // initialized as:   {1,2,3}

  // copy initialization:
  std::array<int,3> fourth = third;     // copy:             {1,2,3}

  std::cout << "The contents of fourth are:";
  for (auto x:fourth) std::cout << ' ' << x;
  std::cout << '\n';
  
  //empty()
  std::array<int,0> first2;
  std::array<int,5> second2;
  std::cout << "first " << (first2.empty() ? "is empty" : "is not empty") << '\n';
  std::cout << "second " << (second2.empty() ? "is empty" : "is not empty") << '\n';
  
  //at()
  std::array<int,10> myarray0;

  // assign some values or print them:
  for (int i=0; i<10; i++) myarray0.at(i) = i+1;
  
  //begin and end
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

  std::cout << "myarray contains:";
  for ( auto it = myarray.begin(); it != myarray.end(); ++it )
    std::cout << ' ' << *it;
  std::cout << '\n';
  
  //size and max_size of an array always match
  std::array<int,10> myints;
  std::cout << "size of myints: " << myints.size() << '\n';
  std::cout << "max_size of myints: " << myints.max_size() << '\n';
  
  //fill()
  std::array<int,6> myarray2;

  myarray2.fill(5);

  std::cout << "myarray2 contains:";
  for ( int& x : myarray2) { std::cout << ' ' << x; }

  std::cout << '\n';
  
  //front() and back()
  std::array<int,3> myarray3 = {5, 19, 77};

  std::cout << "front is: " << myarray3.front() << std::endl;   // 5
  std::cout << "back is: " << myarray3.back() << std::endl;     // 77

  myarray3.back() = 50;

  std::cout << "myarray3 now contains:";
  for ( int& x : myarray3 ) std::cout << ' ' << x;
  std::cout << '\n';
  
  //swap
  std::array<int,5> first3 = {10, 20, 30, 40, 50};
  std::array<int,5> second3 = {11, 22, 33, 44, 55};

  first3.swap (second3);

  std::cout << "first:";
  for (int& x : first3) std::cout << ' ' << x;
  std::cout << '\n';

  std::cout << "second:";
  for (int& x : second3) std::cout << ' ' << x;
  std::cout << '\n';
}