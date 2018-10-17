/*Project Euler
Problem 5: Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
//Currently using a brute force solution
int main ()
{
    
    int ans = 0, i = 2520; //Start from smallest multiple for [1-10]
    while(ans == 0)
    {
        if((i % 2 == 0) && (i % 3 ==0))       //Handles check for 14/20 cases
        {
            if((i % 4 == 0) && (i % 5 == 0) && (i % 6 == 0) && (i % 7 == 0) && (i % 8 == 0) && (i % 9 == 0) && (i % 10 == 0) && (i % 11 == 0) && (i % 12 == 0) && (i % 13 == 0) && (i % 14 == 0) && (i % 15 == 0) && (i % 16 == 0) && (i % 17 == 0) && ( i % 18 == 0) && (i % 19 == 0) && (i % 20 == 0))
            {
                ans = i;
            }
        }
        i = i + 2;                          //Number must be even so increment by 2
    }

    cout << "The answer is: " << ans;
}