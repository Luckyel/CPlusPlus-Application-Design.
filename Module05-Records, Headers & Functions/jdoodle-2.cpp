
#ifndef RECORDTOOLS_H
#define RECORDTOOLS_H

void showMessage();

#endif 

// RECORDTOOLS_H
#include <iostream>


using namespace std;

void showMessage() {
    cout << "Video Game High-Score!" << endl;
}


int main() {
    showMessage();  // Fixed: correct function name and semicolon
    return 0;
}