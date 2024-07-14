#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
// main()
//{
//	// Calculate
//	int num = 5;
//	int result = factorial(num);
//}