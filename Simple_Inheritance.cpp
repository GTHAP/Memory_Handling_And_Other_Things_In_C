#include <iostream>

using namespace std;

class Parent
{
protected:

	int x, y;

public:

	void multiply(int x, int y)
	{
		this->x = x;
		this->y = y;

		cout << x * y << endl;
	}
};

class Child: public Parent
{
	
};

int main()
{
	int first = 999, second = 888;
	Parent obj1;
	cout << "This is the parent class" << endl;
	obj1.multiply(first, second);

	cout << endl;

	Child obj2;
	cout << "This is the child class" << endl;
	obj2.multiply(first, second);
}