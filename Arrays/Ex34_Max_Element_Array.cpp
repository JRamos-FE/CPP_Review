#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    //Write a loop to find the max of the array
    int A[] = {4,6,27,15,31,22,30,29,8,16};
    int max = A[0];

    for (int x:A)
    {
        if (x > max)
            max = x;
    }

    cout << max;
    return 0;
}