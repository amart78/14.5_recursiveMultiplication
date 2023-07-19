/***************************************************************************************
14.5 RECURSIVE MULITPLICATION

This program prompts the user for 2 numbers and outputs their product.
The product is calculated utilizing a recursive function.
****************************************************************************************/

#include <iostream>
using namespace std;

int recursiveMult(int, int);
int inputValidation(int);

int main(){
    int x, y, product;

    // Gets 2 numbers from user.
    cout << "Enter two numbers to calculate their product.\n\n";

    cout << "Number 1: ";
    x = inputValidation(x);

    cout << "Number 2: ";
    y = inputValidation(y);

    // Calculates product of inputted numbers.
    product = recursiveMult(x, y);

    // Displays result.
    cout << "\n" << x << " x " << y << " = " << recursiveMult(x,y);

    return 0;
}

// recursiveMult --------------------------------------------------------------
// This function uses recursion to find the product of two numbers
int recursiveMult(int x, int y){
    if (y == 0){                          // base case
        return 0;
    } else {
        return x + recursiveMult(x, y-1); // recursion
    }
}

// inputValidation ------------------------------------------------------------
// This function checks that the input is an integer, outputting an error
// message and reprompting the user for a number until one is received
int inputValidation(int num){
    while (!(cin >> num)){
        cout << "** ERROR ** A whole number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    } return num;
}