/*Project Euler
Problem 6: Sum square difference
The sum of the squares of the first ten natural numbers is,

(1^2 + 2^2 + ... + 10^2) = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main ()
{
    int range, sum = 0, squaredsum = 0;
    cout<< "Please indicate the upper range: ";
    cin >> range;
    for(int i = 1; i <= range; i++)
    {
        sum += i;
        squaredsum = squaredsum + pow(i,2);
        cout << "Sum: " << sum << " Square Sum: " << squaredsum << endl;
    }
    sum = pow(sum,2);
    cout<< "Final Sum: " << sum << " Square Sum: " << squaredsum << endl;
    cout << "The difference between the sum of squares and square of the sum is: " << sum - squaredsum << endl;
}