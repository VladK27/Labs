#include <iostream>
#include <math.h>
#include <iostream>
#include <string>
#include "mydefs.h"
using namespace std;

void main() {
	string arr_size_str;
	int arr_size;
	int summ = 0;

	cout << "Input array size: ";
	while (1) {
		cin >> arr_size_str;
		if (check_i(arr_size_str)) {
			arr_size = stoi(arr_size_str) - 1;
			if (arr_size > 0) {
				break;
			}
		}
		else {
			cout << "error, input array size: ";
		}
	}
	cout << endl;
	//Инициализация массива
	double* arr = new double[arr_size];

	int which;
	cout << "Choose input type" << endl;
	cout << "1. input from keyboard" << endl << "2. Input by random" << endl;

	while (1) {
		cin >> which;
		if (which == 1 || which == 2) {
			break;
		}
		else {
			cout << "wrong value, enter again: ";
		}
	}

	switch (which) {
	case 1:
		for (int k = 0; k <= arr_size; k++) {
			cout << "array[" << k << ']' << "      ";
			cin >> arr[k];
		}
		break;
	case 2:
		int range_min = -10000;
		int range_max = 10000;
		for (int k = 0; k <= arr_size; k++) {

			arr[k] = rand() % (range_max - range_min) + range_min;
		}
		break;

	}

	if (which == 2) {
		for (int k = 0; k <= arr_size; k++) {
			cout << "array[" << k << ']' << "      ";
			cout << arr[k] << endl;
		}
	}

	cout << endl << endl;
	//Задание лабы
	for (int k = 0; k < arr_size; k++) {
		if (arr[k] < 0) {
			for (k; k < arr_size; k++) {
				summ += abs(arr[k]);
			}
		}
	}
	cout << "Summ = " << summ;
}