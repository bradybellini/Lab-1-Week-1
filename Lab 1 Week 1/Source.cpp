//Brady Bellini
//I certify this is my own work

#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {

	int number_list[100];
	int r, steps;
	int largest = 0;
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		r = rand() % 100;
		number_list[i] = r;
	}

	for (int i = 0; i < size(number_list); i++) {
		if (number_list[i] > largest) {
			largest = number_list[i];
		}
		steps++;
	}

	cout << largest << endl;

	return 0;
}