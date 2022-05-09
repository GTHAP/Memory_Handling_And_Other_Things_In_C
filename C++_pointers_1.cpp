#include <iostream>

using namespace std;

int main()
{
    int test = 100;
    int * point;
    point = &test;
    cout << test << endl;
    cout << point << endl;
    cout << *point << endl;
    cout << &test << endl;
    cout << &point << endl;
}
