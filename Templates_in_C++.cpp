#include <iostream>

using namespace std;

template <typename T>

int size(const T & num)
{
    return sizeof(num);
}

int main()
{
    cout << size(10) << endl;
    cout << size('A') << endl;
    cout << size("STRING") << endl;
    cout << size("STRING") - 1 << endl;
    cout << size(99.99f) << endl;
    cout << size(99999999) << endl;
}
