#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{   
    int A[2][3] = {{2,3,4}, {3,4,5}};
    int B[2][3] = {{3,5,6}, {7,8,9}};
    int C[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j];
        }
    cout << "\n";
    }
    return 0;
}