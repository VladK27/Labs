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
        if (check_i(n_str) && stoi(n_str) > 0) {
            n = stoi(n_str);
            break;
        }
        else cout << "Wrong value, enter again: ";
    }

    int** arr;
    arr = new int* [n];
    for (int i = 0; i < n; i++) arr[i] = new int[n];

    for (int row = 0; row < n; row++) {
        cout << endl;
        for (int col = 0; col < n; col++) {
            arr[row][col] = rand() % 7 - 3 ;
            if (arr[row][col] < 10) cout << arr[row][col] << "  ";
            else cout << arr[row][col] << ' ';
        }
    }

    long int mult = 1;

    cout << endl << endl;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < (n - row - 1); col++) {
            mult *=  arr[row][col] ;
            }
        }
    cout << "Multiplication = " << mult;
    delete []arr;
    }
