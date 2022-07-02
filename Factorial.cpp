#include <iostream>

using namespace std;

// n! = n * (n - 1) * (n - 2) .... and so on 

// 5! = 5 * 4 * 3 * 2 * 1

// Solution using recursion : n * factorial(n - 1)

int factorial(int &n)
{
	int i = 1;
	int x = n;

	while (i < n)
	{
		x = x * i;
		i++;
	}

	return x;
}

int main()
{
	int n;
	cout << "Input the number: " << endl;
	cin >> n;
	cout << factorial(n) << endl;
}