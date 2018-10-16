/*Project Euler
Problem 4: Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

bool isPalindrome(int n)
{
	string input = to_string(n);
	string firstHalf = "";
	string secondHalf = "";
	//Handles the case that the number is an odd length
	if (input.length() % 2 == 1)
	{
		firstHalf = input.substr(0, ((input.length() - 1) / 2));
		secondHalf = input.substr((input.length()) / 2 + 1);
	}
	//Handles the case that the number is an even length
	else
	{
		firstHalf = input.substr(0, (input.length() / 2));
		secondHalf = input.substr(input.length() / 2);
	}
	reverse(secondHalf.begin(), secondHalf.end());
	if (firstHalf == secondHalf)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Brute force method O(n^2)
int main()
{
	int largestPalindrome = 0, factor1 = 0, factor2 = 0;
	for(int i = 900; i < 1000; i++) //start at 900 to reduce latency for lower digit numbers
	{
		for(int j = 900; j < 1000; j++)
		{
			cout << "I: " << i << "J:" << j << endl;
			if ((isPalindrome(i*j) == true) && (largestPalindrome < i * j))
			{
				factor1 = i;
				factor2 = j;
				largestPalindrome = i * j;
			}
		}
	}
	cout << "The largest palindrome from the product of two numbers is:" << largestPalindrome << endl;
	cout << "It is the product of " << factor1 << " and " << factor2 << endl;
}
