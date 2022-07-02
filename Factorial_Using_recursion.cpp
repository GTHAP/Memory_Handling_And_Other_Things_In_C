//Factorial - 5! = 5 * 4 * 3 * 2 * 1

#include<iostream>

using namespace std;

int factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);
	}
}

int main()
{
	int x = 0;
	cout << "Enter a number: ";
	cin >> x;
	cout << factorial(x) << endl;
}