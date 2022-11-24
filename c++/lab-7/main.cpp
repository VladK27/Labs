//13
// variant

#include <iostream>
#include "mydefs.h"
using namespace std;
bool include(char str[],int size){
    for(int i = 0;i < size;i++){
        if(str[i] != ' ') return true;
    }
    return false;
}

int main() {
    string k_str;
    char str[256];
    int k, k_start;

    int size;
    for(int i = 0; i < 256;i++) str[i] = ' ';
    cout << "Enter string: " << endl;
    while(1){
        size = 255;
        cin.getline(str,256);
        for(size; size > 0;size--) if (str[size] != ' '){
                break;
            }
        if(include(str,size)) break;
        cout << "Enter again: ";
    }

    cout << "Size of line is " << size << endl;
    cout << "Enter position(from " << 0 << " to " << size << "): ";
    while (1) {
        cin >> k_str;
        if (check_i(k_str)) {
            k = stoi(k_str);
            if (k < size) break;
            else {
                cout << "Not in range, enter again: ";
                continue;
            }
        }
        else cout << "Wrong value, enter again: ";

    }
    if (k == 0) k++;
    if (str[k] == ' ') k--;
    while (1) {
        if (k != 0 && str[k] != ' ') k--;
        else break;
    }
    if (str[k] == ' ') k++;
    int size1 = k;
    int size2 = size - k;
    char *sub_str1 = new char[size1];
    char *sub_str2 = new char[size2];
    for(int i = 0;i < size;i++) sub_str1[i] = str[i];
    for(int i = 0;i < size2;i++) sub_str2[i] = str[i+size1];
    for(int i = 0;i < size1;i++) cout << sub_str1[i];
    cout << endl;
    for(int i = 0;i < size2;i++) cout << sub_str2[i];
}