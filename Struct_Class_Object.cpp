#include <iostream>

using namespace std;

class Music {

public:

	
	const char* song_name;
	const char* band_name;
	const char* genre;
	int price;

};

int main()
{
	Music list1 = { "Points Of Authority", "Linkin Park", "Nu Metal", 500 };

	cout << list1.song_name << endl << list1.band_name << endl << list1.genre << endl << list1.price << " rupees" << endl;

	cout << endl;

	Music* list2 = &list1;

	list2->song_name = "Stupify", list2->band_name = "Disturbed", list2->genre = "Nu Metal", list2->price = 500;

	cout << list2->song_name << endl << list2->band_name << endl << list2->genre << endl << list2->price << " rupees" << endl; 
}