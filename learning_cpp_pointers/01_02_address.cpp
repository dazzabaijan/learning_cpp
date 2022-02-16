// 01_02_address.cpp : Defines the entry point for the console appplication

#include <iostream>

using namespace std;

int main(){
    int number = 240;     // define an int variable
    int* numPtr;          // defined an integer pointer numPtr
    numPtr = &number;
    cout << "The address of number is: " << numPtr << endl;

    // double number2 = 13.5;
    // numPtr = &number2;

    return 0;
}
