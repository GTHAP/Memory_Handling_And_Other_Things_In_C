#include <iostream>

using namespace std;

class Base
{

protected:

	int X, Y;
	string name;

public:

	Base() {};

	Base(string _n, int _x, int _y)
	{
		name = _n;
		X = _x;
		Y = _y;
	}

	void print()
	{
		cout << name << endl;
		cout << X << endl;
		cout << Y << endl;
	}
};

class Derived : protected Base
{

public:

	Derived() {};

	void multiply(string _n, int _x, int _y)
	{
		name = _n;
		X = _x;
		Y = _y;

		cout << name << " " << X * Y << endl;
	}
};

int main()
{
	Base obj1("GTX", 100, 100);
	obj1.print();

	cout << endl;

	Derived obj2;
	obj2.multiply("GTX", 100, 100);
}