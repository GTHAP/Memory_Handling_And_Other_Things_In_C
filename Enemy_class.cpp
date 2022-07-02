#include<iostream>

using namespace std;

class Enemy_Gear
{

public:

    const char* EnemyName;
    const char* Armour1;
    const char* Weapon1;
    const char* Weapon2;
    const char* GrenadeType1;



    Enemy_Gear(const char* _EnemyName, const char* _Armour1, const char* _Weapon1, const char* _Weapon2, const char* _GrenadeType1)
    {
        EnemyName = _EnemyName;
        Armour1 = _Armour1;
        Weapon1 = _Weapon1;
        Weapon2 = _Weapon2;
        GrenadeType1 = _GrenadeType1;
    }

    void print()
    {
        cout << EnemyName << endl;
        cout << Armour1 << endl;
        cout << Weapon1 << endl;
        cout << Weapon2 << endl;
        cout << GrenadeType1 << endl;
    }
};

int main()
{
    Enemy_Gear gear1("Hunter", "Basic", "Sniper Rifle", "Pistol", "EMP Grenade");
    gear1.print();
}