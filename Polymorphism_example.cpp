using namespace std;

#include <iostream>

class Base
{

protected:

	int first, second;

public:

	void set(int x, int y)
	{
		first = x;
		second = y;
	}
};

class Derived1 : public Base
{

public:

	int claculate()
	{
		return first * second;
	}
};

class Derived2 : public Base
{

public:

	int claculate()
	{
		return first + second;
	}
};

int main()
{
	Derived1 der1; // Derived1 object
	Derived2 der2; // Derived2 object
	Base* base1 = &der1; // A pointer object of Base type that points to the address of Derived1 object der1
	Base* base2 = &der2; // A pointer object of Base type that points to the address of Derived2 object der2
	base1->set(100, 100); // Base object base1 calls the set member function from the Base class and sets the values
	base2->set(100, 100); // Base object base2 calls the set member function from the Base class and sets the values
	cout << der1.claculate() << endl; // The Derived1 object der1 calls the calculate function. The output is printed.
	cout << der2.claculate() << endl; // The Derived2 object der2 calls the calculate function. The output is printed.
}