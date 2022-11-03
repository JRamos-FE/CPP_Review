#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{   
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;

    //Write a loop to count postitive and negative numbers
    for (int x:A)
    {
        if (x < 0)
            ncount++;
        else
            pcount++;
    }

    cout << pcount << endl << ncount << "\n";
    return 0;
}