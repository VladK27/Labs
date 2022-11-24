#pragma once
#include <string>
using namespace std;

bool check_d(string num) {
	int k = 0;

	if (num.length() == 1 && (num[0] == '.' || num[0] == '-')) {
		return 0;
	}

	if (num[0] == '0' && num[1] != '.') {
		return 0;
	}
	if (num[1] == '0' && num[2] != '.') {
		return 0;
	}

	while (k != num.length()) {
		if (num[k] == '.') {
			break;
		}
		else {
			k++;
		}
	}

	if (num.length() == 2 && (num[0] == '-' || num[0] == '+') && num[1] == '.') {
		return 0;
	}

	for (int i = 0; i != num.length(); i++) {
		if (num[i] == '+' || num[i] == '-' || num[i] == '0' || num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '4' || num[i] == '5'
			|| num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9' || num[i] == '.') {

			if (num[i] == '.' && i != k) {
				return 0;
				break;
			}
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

int fact(int x) {
	if (x > 0) {
		return (x * fact(x - 1));
	}
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
