//Weston Dilling
//wgd14
//09/28/20
//CS1428 Lab
//Lab 4
//Description: this a simple 4-function calculator

#include <iostream>
using namespace std;

int main()
{
    char operation;  //user's choice of operation
    double first_num, second_num, //user's choice of real numbers
    	   result;

    // Display greeting:
    cout << "Welcome to my super deluxe calculator 2000!\n";

    // Get user input:
    cout << "Enter the first number\n";
    cin >> first_num;

    cout << "Enter the desired operation (+ - * /)\n";
    cin >> operation;

    cout << "Enter the second number\n";
    cin >> second_num;

    // TODO: Use a switch statement to evaluate what operator the user selected,
    // and thus which operation to perform. Handle error checking where appropriate.
    switch (operation)
    {
    case '+':
        result = first_num + second_num;
        break;
    case '-':
        result = first_num - second_num;
        break;
    case '*':
        result = first_num * second_num;
        break;
    case '/':
        result = first_num / second_num;
        if (second_num == 0) {
            cout << "ERROR: Divide by zero. Terminating program";
            return 0;
        }
    default:
        cout << "ERROR: Invalid operator. Terminating program";
        return 0;
    }

    cout << first_num << " " << operation << " " << second_num << " = " << result;


    // Exit the program:
    return 0;
}
