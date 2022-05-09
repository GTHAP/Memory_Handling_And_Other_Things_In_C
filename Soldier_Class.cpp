#include<iostream>

using namespace std;

class Soldier_Gear
{
public:

    const char* SoldierName;
    const char* Armour1;
    const char* Weapon1;
    const char* Weapon2;
    const char* Weapon3;
    const char* Weapon4;
    const char* GrenadeType1;
    const char* Accessory1;

    void Soldier_Details()
    {
        cout << SoldierName << endl;
        cout << Armour1 << endl;
        cout << Weapon1 << endl;
        cout << Weapon2 << endl;
        cout << Weapon3 << endl;
        cout << Weapon4 << endl;
        cout << GrenadeType1 << endl;
        cout << Accessory1 << endl;
    }
};

int main()
{
    Soldier_Gear gear1;
    gear1.SoldierName = "Demolisher";
    gear1.Armour1 = "Heavy";
    gear1.Weapon1 = "Machine Gun";
    gear1.Weapon2 = "Rocket Launcher";
    gear1.Weapon3 = "Gauss Rifle";
    gear1.Weapon4 = "Mini Nuke Launcher";
    gear1.GrenadeType1 = "Fragmentation Grenade";
    gear1.Accessory1 = "Orbital Strike";
    gear1.Soldier_Details();
}
