//12 variant

#include <iostream>
#include <string>
#include <stdio.h>
#include "mydefs.h"
using namespace std;

int main() {
	string k_str, str;
	int k, k_start;

	cout << "Enter string: " << endl;
	getline(cin, str);

	cout << "Enter position: ";
	while (1) {
		cin >> k_str;
		if (check_i(k_str)) {
			k = stoi(k_str);
			if (k < str.length()) {
				break;
			}
			else {
				cout << "Not in range, enter again: ";
				continue;
			}
		}
		else {
			cout << "Wrong value, enter again: ";
		}

	}
	
	if (k == 0) k++;
	if (str[k] == ' ') k--;
	while (1) {
		if (k != 0 && str[k] != ' ') {
			k--;
		}
		else break;
	}
	if (str[k] == ' ') k++;
	while (1) {
		if (k == str.length() - 1) cout << str[k];
		if (str[k] != ' ' && k != (str.length() - 1)) {
			cout << str[k];
			k++;
		}
		else {
			break;
		}
	}
	return 1;
}