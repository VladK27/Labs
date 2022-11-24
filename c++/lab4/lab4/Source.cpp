#include <iostream>
#include <math.h>
#include <string>
#include "mydefs.h"
using namespace std;

double sx(double x, int n, int k) {
	double sx_summ = 0;
	for (int k = 1; k <= n; k++) {
		sx_summ += pow(-1, k) * (pow(2 * x, 2 * k) / fact(2 * k));
	}
	return sx_summ;
}

double yx(double x) {
	return (2 * (pow(cos(x), 2) - 1));
}

double sx_yx(double x, int n, int k) {
	double sx_summ = 0;
	double yx = 0;
	for (int k = 1; k <= n; k++) {
		sx_summ += pow(-1, k) * (pow(2 * x, 2 * k) / fact(2 * k));
	}
	yx = (2 * (pow(cos(x), 2) - 1));
	return abs(yx - sx_summ);
}

int main() {
	string x_str, a_str, b_str, h_str, n_str, def;
	double x, a, b, h;
	int n, which_def;
	double sx_summ, yx, chast;

	cout << "Enter interval start: ";
	while (1) {
		cin >> a_str;
		if (check_d(a_str)) {
			a = stod(a_str);
			break;
		}
		else {
			cout << "error, enter interval start again: ";
		}
	}

	cout << "Enter interval end: ";
	while (1) {
		cin >> b_str;
		if (check_d(b_str)) {
			b = stod(b_str);
			break;
		}
		else {
			cout << "error, enter interval end again: ";
		}
	}

	cout << "Enter interval step: ";
	while (1) {
		cin >> h_str;
		if (check_d(h_str)) {
			h = stod(h_str);
			break;
		}
		else {
			cout << "error, enter interval step again: ";
		}
	}

	cout << "Enter integer n: ";
	while (1) {
		cin >> n_str;
		if (check_i(n_str)) {
			n = stoi(n_str);
			break;
		}
		else {
			cout << "error, enter n again: ";
		}
	}

	cout << "Choose function: " << endl;
	cout << "1. S(x)" << endl << "2. Y(x)" << endl << "3. |Y(x) - S(x)|" << endl;

	while (1) {
		cin >> which_def;
		if (which_def == 1 || which_def == 2 || which_def == 3) {
			break;
		}
		else {
			cout << "error, choose funtion again: ";
		}
	}

	/*Определение значения функции*/
	switch (which_def) {
		case 1: 
			cout << 'x' << "	  " << "S(x)";
			break;
		case 2: 
			cout << 'x' << "	  " << "Y(x)";
			break;
		case 3: 
			cout << 'x' << "	  " << "|Y(x) - S(x)|";
			break;
	}

	cout << endl << endl << endl;

	
	for (a; a <= b; a += h) {
		x = a;

		/*S(x)*/
		sx_summ = 0;
		for (int k = 1; k <= n; k++) {
			sx_summ += pow(-1, k) * (pow(2 * x, 2 * k) / fact(2 * k));
		}
		
		/*Y(x)*/
		yx = 2 * (pow(cos(x), 2) - 1);

		/*Y(x) - S(x)*/
		chast = abs(yx - sx_summ);

		for (int k = 1; k <= n; k++) {
			sx_summ += pow(-1, k) * (pow(2 * x, 2 * k) / fact(2 * k));
		}

		switch (which_def) {
		case 1: 
			cout << x << "	    " << sx_summ <<  endl;
			break;
		case 2: 
			cout << x << "	    " << yx << endl;
			break;
		case 3:
			cout << x << "	    " << chast << endl;
			break;
		}
	}

}