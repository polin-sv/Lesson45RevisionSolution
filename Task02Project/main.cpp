#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];

	int length;
	

	do {
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}

	return 0;
}