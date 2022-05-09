#include <iostream>

using namespace std;

class Trip
{
    public:
    int paid;
    const char * name;
    int amount;
    
    void print()
    {
        cout << name << " needs to pay " << amount << endl;
    }
    int calculate(int pending)
    {
        return amount = paid - pending;
    }
};

int main()
{
    Trip payment;
    payment.paid = 2000;
    payment.name = "GTX";
    int pending = 0;
    cout << "What is the pending amount?" << endl;
    cin >> pending;
    payment.calculate(pending);
    payment.print();
}
