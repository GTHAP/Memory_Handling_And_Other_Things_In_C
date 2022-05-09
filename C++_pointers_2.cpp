#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = a;
    cout << a << " " << b << endl;
    a = 100;
    cout << a << " " << b << endl;
    
    cout << endl;
    
    int x = 101;
    int * y = &x;
    cout << x << " " << *y << endl;
    x = 99;
    cout << x << " " << *y << endl;
}
