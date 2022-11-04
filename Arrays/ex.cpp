#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j;

        }
        cout << i << "\n";
    }
    return 0;
}