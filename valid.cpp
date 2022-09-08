/*
Author: Baolin Chang
Course: CSCI-135
Instructor: Professor Zamansky
LAB 2 TASK A

Asks user to input integer and prints the number squared
*/

#include <iostream>
#include <math.h>

int main(){

    int number;

    //asks user for integer while integer is out of range
    do{
      std::cout << "Please enter an integer: ";
      std::cin >> number;
    } while (number <=0 || number >=100);

    std::cout<<"\nNumber squared is " << pow(number,2);
    std::cout<<"\n";

    return 0;
}