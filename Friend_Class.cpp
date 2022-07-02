#include<iostream>

using namespace std;

class ClassA
{
private:

	int x, y;
	const char* a;
	const char* b;

public:

	ClassA(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void multiply(int x, int y)
	{
		this->x = x;
		this->y = y;

		cout << x * y << endl;
	}

	void print(const char* a, const char* b)
	{
		this->a = a;
		this->b = b;

		cout << a << " " << b << endl;
	}

	friend class ClassB;
};

class ClassB
{
};

int main()
{
}