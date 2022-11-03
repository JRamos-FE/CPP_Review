/*
    Find the sum of all the elements within an array
    A = array of elements
    n = number of elements within the array
*/

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A[] = {2,4,121,8,10,15,13}, n = 7;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    cout << sum << endl;
    cout << sum + 100;


    return 0;
}
