#include <iostream>

struct k{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	k guest={
		"Glorious Gloria",
		1.88,
		29.99
	};

	k pal={
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!" << endl;

	cout << "You can have both for $" << guest.price+pal.price << endl;

	return 0;
}
