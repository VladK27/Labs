#include <iostream>
#include <string>
#include "mydefs.h"

using namespace std;

int main() {
	int n;
	string n_str;
	srand(time(NULL));
	cout << "Enter rank of matrix: ";
	while (1) {
		cin >> n_str;
		if (check_i(n_str)) {
			n = stoi(n_str);
			break;
		}
		else {
			cout << "Wrong value, enter again: ";
		}
	}

	int** arr;

	arr = new int* [n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int row = 0; row < n; row++) {
		cout << endl;
		for (int col = 0; col < n; col++) {
			arr[row][col] = rand() % 99 + 1;
			if (arr[row][col] < 10) cout << arr[row][col] << "  ";
			else cout << arr[row][col] << ' ';
		}
	}

	int max_number = 0;
	int max_number_adr[2];

	cout << endl << endl;

	for (int row = 0; row < n; row++) {	
			for (int col = 0; col < (n - row - 1); col++) {
				if (arr[row][col] > max_number) {
					max_number = arr[row][col];
					max_number_adr[0] = row;
					max_number_adr[1] = col;
				}
			}
		}

	cout << "Max number: " << max_number << endl;
	cout << "Address: [" << max_number_adr[0] + 1 << "][" << max_number_adr[1] + 1 << ']' << endl;
	}
