#include <iostream>

using namespace std;

class memory
{
private:
	int a;
	int b;
public:
	void print(int a, int b)
	{
		this->a = a;
		this->b = b;
		cout << a << " " << b << endl;
	}
};

int main()
{
	memory* mem_obj = new (memory);
	mem_obj->print(5000, 10000);
	delete mem_obj;
}