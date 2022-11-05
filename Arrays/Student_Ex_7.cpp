#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
//Create a program to multiply two matrices

int main()
{   
    int A[10][10], B[10][10], C[10][10];
    int row1, row2, col1, col2;

    //User input and variable setting
    cout << "Enter the amount of rows for matrix 1: ";
    cin >> row1;
    cout << "Enter the amount of columns for matrix 1: ";
    cin >> col1;
    cout << "Enter the amount of rows for matrix 2: ";
    cin >> row2;
    cout << "Enter the amount of columns for matrix 2: ";
    cin >> col2;
    
    //Matrix 1 elements storing
    cout << "\n" << "Enter the elements for matrix 1 " << "\n";
    for(int i = 0; i < row1; ++i)
    {
        for(int j = 0; j < col1; ++j)
        {
            cout << "Enter element A " << i + 1 << "," << j + 1 << " : ";
            cin >> A[i][j];
        }
    }

    //Matrix 2 elements storing
    cout << "\n" << "Enter the elements for matrix 2 " << "\n";
    for(int i = 0; i < row2; ++i)
    {
        for(int j = 0; j < col2; ++j)
        {
            cout << "Enter element B " << i + 1 << "," << j + 1 << " : ";
            cin >> B[i][j];
        }
    }

    //Improper Input
    if (col1 != row2)
    {
        cout << "These matrices can not be multiplied";
        return 0;
    }

    //Matrix multiplication and storage
    for(int i = 0; i < row1; ++i)
    {
        for(int j = 0; j < col2; ++j)
        {
            C[i][j] = 0;
            for(int k = 0; k < col1; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //Displaying matrix multiplication
    cout << "\n" << "Matrix C: " << "\n";
    for(int i = 0; i < row1; ++i)
    {
        for(int j = 0; j < col2; ++j)
        {
            cout << " " << C[i][j];
            if(j == col2 - 1)
                cout << "\n";
        }
    }
    return 0;
}