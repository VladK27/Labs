#include <iostream>
#include <math.h>
#include <string>
#include "mydefs.h"
using namespace std;


int main() {
	string x_str, a_str, b_str, h_str, n_str;
	double x, a, b, h;
	int n;
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
	cout << endl << endl << endl;

	cout << 'x' << "	" << "S(x)" << "	" << "Y(x)" << "	" << "|Y(x) - S(x)|" << endl << endl;

	for (a; a <= b; a += h) {
		x = a;

		/*S(x)*/
		sx_summ = 0;
		for (int k = 1; k <= n; k++) {
			sx_summ += pow(-1, k)*(pow(2*x,2*k)/fact(2*k));
		}

		/*Y(x)*/
		yx = 2 * (pow(cos(x), 2) - 1);

		/*Y(x) - S(x)*/
		chast = abs(yx - sx_summ);

		cout << x << "    " << sx_summ << "    " << yx << "    " << chast << endl << endl;
		
		}

	}

