#include <iostream>

using namespace std;

int main()
{
	int* enemy = new int[1024];
	cout << "Allocated space for enemy" << endl;

	int enemy_health = 10;

	int bullet_damage;
	cout << "Input expected bullet damage" << endl;
	cin >> bullet_damage;

	int update_enemy_health = enemy_health - bullet_damage;

	if (update_enemy_health <= 0)
	{
		cout << "The enemy is dead" << endl;
	}
	else
	{
		cout << "The enemy survived. Please try again" << endl;
	}

	delete[] enemy;
	cout << "Memory allocated to enemy deleted" << endl;
}