#include<iostream>

using namespace std;

class office_employees
{
private:
	string name;
	string profile;
	int age;
	int salary;
public:
	virtual void print_details(string _n, string _p, int _a, int _s)
	{
		name = _n;
		profile = _p;
		age = _a;
		salary = _s;

		cout << "Existing Employee:" << " " << _n << " " << _p << " " << _a << " " << _s << endl;
	}
};

class new_joinees: public office_employees
{
private:
	string name;
	int age;
public:
	void print_details(string _n, int _a)
	{
		name = _n;
		age = _a;

		cout << "New employee:" << " " << _n << " " << _a << endl;
	}
};

int main()
{
	office_employees employee1;
	employee1.print_details("GTX", "Senior Security Engineer", 34, 300000);

	office_employees employee2;
	employee2.print_details("RTX", "Human Resources", 26, 100000);

	new_joinees new_employee1;
	new_employee1.print_details("ETX", 21);

	new_joinees new_employee2;
	new_employee2.print_details("HTX", 41);
}