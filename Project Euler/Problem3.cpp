/*Project Euler
Problem 3: Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

// A function to find largest prime factor 
long long maxPrimeFactor(long long n) 
{ 
	// Initialize the maximum prime factor 
	// variable with the lowest one 
	long long maxPrime = -1; 

	// Print the number of 2s that divide n 
	while (n % 2 == 0) { 
		maxPrime = 2; 
		n >>= 1; // equivalent to n /= 2 
	} 

	// n must be odd at this point, thus skip 
	// the even numbers and iterate only for 
	// odd integers 
	for (int i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			maxPrime = i; 
			n = n / i; 
		} 
	} 

	// This condition is to handle the case 
	// when n is a prime number greater than 2 
	if (n > 2) 
		maxPrime = n; 

	return maxPrime; 
}

int main()
{
    long long input, largestPrime = 1;
    cout << "Please enter your number: ";
    cin >> input;
    cout << "The largest prime is: " << maxPrimeFactor(input);
}

/*Test Case:
1: 13195            Ans: 29
2: 100              Ans:5
3: 600851475143     Ans:6857
*/