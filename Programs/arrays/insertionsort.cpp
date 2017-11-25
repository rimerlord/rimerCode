/*
@file   program to implement insertion sort
*/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n)
{
    int value, hole;
    for(int i=0; i<n; i++)
    {
        //save the value in temp. location, 
        value = arr[i];
        //assumes a hole at arr[i]
        hole = i;
        //while shifting is possible and element before the hole can be shifted
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
}

int main()
{
    int arr[5] = {1,3,4,5,2};
    insertion_sort(arr, 5);
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
}