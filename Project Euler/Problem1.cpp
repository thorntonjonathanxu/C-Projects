/*Project Euler
Problem 1: Multiples of 3 and 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() 
{
    int n =0;
    cout << "Input the value of N: ";
    cin >> n;
    int sum = 0;
    int i = 1;
    while(i < n)
    {
        if(i%3 == 0)
        {
            sum += i;
        }
        else if(i%5 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "Your answer is: ";
    cout << sum;
    return sum;
}