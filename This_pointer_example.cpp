#include<iostream>

using namespace std;

class Random_Events
{
private:
	int a, b;

public:
	void attack(int a, int b)
	{
		this->a = a;
		this->b= b;
	}
	void print()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	Random_Events event;
	event.attack(100, 200);
	event.print();
}
