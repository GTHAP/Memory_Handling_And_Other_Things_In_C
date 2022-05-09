// Call by reference

#include <iostream>
using namespace std;

void increment(int &a)
{
    a++;
}

int main()
{
    int x = 111;
    increment(x);
    cout << x << endl;
}
