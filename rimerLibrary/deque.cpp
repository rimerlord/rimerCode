// constructing deques
#include <iostream>
#include <deque>

int main ()
{
  unsigned int i;

  // constructors used in the same order as described above:
  std::deque<int> first;                                // empty deque of ints
  std::deque<int> second (4,100);                       // four ints with value 100
  std::deque<int> third (second.begin(),second.end());  // iterating through second
  std::deque<int> fourth (third);                       // a copy of third

  // the iterator constructor can be used to copy arrays:
  int myints[] = {16,2,77,29};
  std::deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are:";
  for (std::deque<int>::iterator it = fifth.begin(); it!=fifth.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  //everything is same as that of vector except
  //because it allows adding/deleting at th front/back as well
  std::deque<int> mydeque (2,100);     // two ints with a value of 100
  mydeque.push_front (200);
  mydeque.push_front (300);

  std::cout << "mydeque contains:";
  for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  
  //pop_front
  std::deque<int> mydeque2;

  mydeque2.push_back (100);
  mydeque2.push_back (200);
  mydeque2.push_back (300);

  std::cout << "Popping out the elements in mydeque2:";
  while (!mydeque2.empty())
  {
    std::cout << ' ' << mydeque2.front();
    mydeque2.pop_front();
  }

  std::cout << "\nThe final size of mydeque2 is " << mydeque2.size()<< '\n';
  return 0;
}