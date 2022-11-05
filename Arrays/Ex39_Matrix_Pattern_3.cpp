#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
/*
Draw a pattern of * for given dimensions given below
          *
        * *
      * * *
    * * * *
  * * * * *
*/
int main()
{   
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i <= j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout<< "\n";
    }
    

    return 0;
}