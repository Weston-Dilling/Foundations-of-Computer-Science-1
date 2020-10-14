//Weston Dilling
//wgd14
//10/05/20
//CS1428 Lab
//Lab 5
//Description: this program will print the first n factorials

#include <iostream>
using namespace std;

int main() {

    int num,
        factorial = 1;

    // Prompt the user for a number:
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << endl;

    // TODO: Validate input, then calculate and print the factorial:
    if ( num > 12 )
    {
        cout << "ERROR. Valid numbers are 0-12.";
        return -1;
    }
    else if ( num < 0 )
    {
        cout << "ERROR. Valid numbers are 0-12.";
        return -1;
    }

    else
    {
        cout << "!" << num << " = ";
        for (int i = 1; i <= num; i++)
        {
            if ( i > 1 )
            {
                cout << " * ";
            }
            cout << i;
            factorial *= i;
        }
    }
    cout << " = " << factorial << endl;


    return 0;
}
