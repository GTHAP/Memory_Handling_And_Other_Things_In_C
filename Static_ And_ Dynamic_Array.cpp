#include <iostream>

using namespace std;

int main()
{
	// Static array

	int stat_array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int array_size = sizeof(stat_array) / sizeof(int); // Calculate the size/length of stat_array

	for (int x = 0; x < array_size; ++x)
	{
		cout << stat_array[x] << " ";
	}

	// Dynamic array initialization - 

	int* array{ new int[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } }; 

	// Another way to initialize a dynmaic array - 

	int size;
    cin >> size;

	int* my_array = new int[size] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < size; ++i)
	{
		cout << my_array[i] << " ";
	}

	delete [] my_array; // Always do this to avoid memory leak

}