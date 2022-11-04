#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
/*Draw a pattern of * for given dimensions given below
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/
int main()
{   
    for (int i = 0; i < 5; i++)
    {
        for (int j =0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    

    return 0;
}