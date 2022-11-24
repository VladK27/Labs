#include <iostream>
#include <math.h>
#include <iostream>
#include <string>
#include "mydefs.h"
using namespace std;

int main() {
    srand(time(NULL));
    string arr_size_str;
    string arr_el;
    int arr_size;
    int summ = 0;
    int n;

    cout << "Input array size: ";
    while (1) {
        cin >> arr_size_str;
        if (check_i(arr_size_str) && (stoi(arr_size_str) > 0)) {
            arr_size = stoi(arr_size_str);
            if (arr_size > 0) break;
        } else { cout << "error, input array size: "; }
    }
    cout << endl;
    double *arr = new double[arr_size - 1];

    int which;
    cout << "Choose input type" << endl;
    cout << "1. input from keyboard" << endl << "2. Input by random" << endl;

    while (1) {
        cin >> which;
        if (which == 1 || which == 2) break;
        else { cout << "wrong value, enter again: "; }
    }

    switch (which) {
        case 1: {
            int k = 0;
            while (true) {
                if (k == arr_size) break;
                cout << "array[" << k << "] = " << "      ";
                cin >> arr_el;
                if (check_i(arr_el)) {
                    arr[k] = stoi(arr_el);
                    k++;
                } else { cout << "Wrong value" << endl; }
            }
            break;
        }
        case 2:
            int range_min = -17;
            int range_max = 25;
            for (int k = 0; k < arr_size; k++) arr[k] = rand() % (range_max - range_min) + range_min;
            break;
    }

    if (which == 2) {
        for (int k = 0; k < arr_size; k++) {
            cout << "array[" << k << ']' << "      ";
            cout << arr[k] << endl;
        }
    }

    cout << endl;
    bool is_neg_num_last = false;
    bool is_negative_number_exist = false;
    for (int k = 0; k < arr_size; k++)
        if (arr[k] < 0) {
            k++;
            if (k == arr_size) {
                is_neg_num_last = true;
                cout << "First negative number at the end of array, summ dosn't exist." << endl;
                break;
            }
            else {
                is_negative_number_exist = true;}
            for (k; k < arr_size; k++) {
                summ += abs(arr[k]);
            }
            cout << "Summ = " << summ << endl;
        }
    if (!is_negative_number_exist) {
        if(!is_neg_num_last) cout << "Negative numbers didn't found" << endl;
    }
}