#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
//Create a program that can calculate the averages of all elements in an array
int main()
{   
    float A[100];
    int n = 0;
    float sum = 0.0;

    cout << "Enter the size of the array: " << "\n";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an integer value for position: " << i + 1 << "\n";
        cin >> A[i];
        sum += A[i];
    }

    float average = sum / n;
    cout << "Average = " << average;
    return 0;
}