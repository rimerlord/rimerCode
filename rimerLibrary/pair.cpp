// std::pair<T_1, T_2> in STL C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*Initialisation*/
    pair<int, char> Pair1 (1,'G');
    //Pair1.first = 1;
    //Pair1.second = 'G';
    pair<int, char> Pair2 (Pair1);
    pair<int, char> Pair3 = make_pair(1,'G');
    
    cout << Pair1.first << Pair1.second << endl;
    cout << Pair2.first << Pair2.second << endl;
    cout << Pair3.first << Pair3.second << endl;
    cout << (Pair1 == Pair2) << endl; //first gets compared before second
    
    pair<int, char> Pair4;
    Pair4.swap(Pair1);
    cout << Pair1.first << Pair1.second << endl; // Only first gets initialised to 0
    cout << Pair4.first << Pair4.second << endl;
}