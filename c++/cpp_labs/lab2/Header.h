#pragma once
#include <string>
using namespace std;
bool check(string num) {
	int k = 0;

	// проверка на ввод только - или .
	if (num.length() == 1 && (num[0] == '.' || num[0] == '-')) {
		return 0;
	}
	// проверка 00009
	if (num[0] == '0' && num[1] != '.') {
		return 0;
	}

	//поиск индекса точки для проверки на единственную точку
	while (k != num.length()) {
		if (num[k] == '.') {
			break;
		}
		else {
			k++;
		}
	}

	// проверка на -. или +.
	if (num.length() == 2 && (num[0] == '-' || num[0] == '+') && num[1] == '.') {
		return 0;
	}

	// проверка на не числа
	for (int i = 0; i != num.length(); i++) {
		if (num[i] == '+' || num[i] == '-' || num[i] == '0' || num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '4' || num[i] == '5'
			|| num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9' || num[i] == '.') {

			// проверка на единственную точку
			if (num[i] == '.' && i != k) {
				return 0;
				break;
			}

			// проверка на ввод + или - первым символом
			if ((num[i] == '-' || num[i] == '+') && i != 0) {
				return 0;
				break;
			}
		}

		else {
			return 0;

		}
	}
	return 1;
}

bool check_i(string num) {
	int i = 0;

	if (num[0] == '0' && num[1] == '0') {
		return 0;
	}

	while (i != num.length()) {
		if (num[i] == '-' || num[i] == '0' || num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '4' || num[i] == '5'
			|| num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9') {

			if (num[i] == '-' && i != 0) {
				return 0;
				break;
			}
			else {
				i++;
			}
		}
		else {
			return 0;
			break;
		}
	}
	return 1;
}