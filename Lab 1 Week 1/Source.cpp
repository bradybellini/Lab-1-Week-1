//Brady Bellini
//I certify this is my own work

#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int number_list[100];
	int r;
	int steps = 0;
	int largest_num = 0;
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		r = rand() % 100;
		number_list[i] = r;
		cout << number_list[i] << endl;
	}

	for (int i = 0; i < size(number_list); i++) {
		if (number_list[i] > largest_num) {
			largest_num = number_list[i];
		}
		steps++;
	}
	cout << endl;
	cout << "Step counter: " << steps << endl;
	cout << "Largest number" << largest_num << endl;

	return 0;
}