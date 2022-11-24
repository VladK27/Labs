#define _USE_MATH_DEFINES
#include <cmath>;
#include <string>;
#include <iostream>;
#include "Header.h"
using namespace std;

/*Функция проверки*/

int main() {
	string z_str, k_str, m_str, n_str;
	double z, k, m, n, x;
	int which_def;
	double def;

	cout << "Enter z, k, m, n" << endl;
	
	/*Проверка и ввод z*/
	cout << "z = ";
	while (1) {
		cin >> z_str;
		if (check(z_str)) {
			z = stod(z_str);
			break;
		}
		else {
			cout << "error, enter 'z' again: ";
		}

	}
	

	/*Ввод и проврка k*/
	cout << "k = ";
	while (1) {
		cin >> k_str;
		if (check(k_str)) {
			k = stod(k_str);
			break;
		}
		else {
			cout << "error, enter 'k' again: ";
		}

	}

	/*Ввод и проверка m*/
	cout << "m = ";
	while (1) {
		cin >> m_str;
		if (check(m_str) && stod(m_str) != 0) {
			m = stod(m_str);
			break;
		}
		else {
			if (stod(m_str) == 0) {
				cout << "error, m can't be zero, enter m again: ";
			}
			else {
				cout << "error, enter 'm' again: ";
			}
		}

	}

	/*Ввод и проверка n*/
	cout << "n = ";
	while (1) {
		cin >> n_str;
		if (check(n_str)) {
			n = stod(n_str);
			break;
		}
		else {
			cout << "error, enter 'n' again: ";
		}

	}

	/*Выбор аргумента функции*/
	if (z > 1) {
		x = z;
		cout << "x = z = " << x;
	}
	else {
		x = z * z + 1;
		cout << "x = z*z + 1 = " << x;
	}

	/*Выбор функции*/
	cout << endl << "Choose function:" << endl;
	cout << endl << "1. f(x) = 2x" << endl;
	cout << "2. f(x) = x*x" << endl;
	cout << "3. f(x) = x/3" << endl << endl;

	/*Проверка ввода*/
	string which_def_str;
	while (1) {
		while (1) {
			cin >> which_def_str;
			if (check_i(which_def_str)) {
				which_def = stoi(which_def_str);
				break;
			}
			else {
				cout << "error";
			}
		}
		if (which_def == 1 || which_def == 2 || which_def == 3) {
			break;
		}
		else {
			cout << "error, choose funtion again: ";
		}
	}

	/*Определение значения функции*/
	switch (which_def) {
	case(1): def = 2 * x;
		break;
	case(2): def = x * x;
		break;
	case(3): def = x / 3;
		break;
		}
		
	/*Финальный подсчет и вывод*/

	cout << endl << "y = " << (sin(n * def) + cos(k * x) + log(m * x)) << endl << endl;
}