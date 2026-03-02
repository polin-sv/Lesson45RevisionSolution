// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

#include "logic.h"

int max_index(int array[DEFAULT_SIZE], int size) {
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[index]) {
			index = i;
		}
	}
	return index;
}

int min_index(int array[DEFAULT_SIZE], int size) {
	int index = 0;
	for (int j = 0; j < size; j++)
	{
		if (array[j] < array[index]) {
			index = j;
		}
	}
	return index;
}

void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	int index_max = max_index(array, size);
	int index_min = min_index(array, size);

	int temp = array[index_max];
	array[index_max] = array[index_min];
	array[index_min] = temp;
}