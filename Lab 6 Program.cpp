//Weston Dilling
//10/10/2020
//CS1428 Lab
//Lab 6
//Description: this program will print n even or odd numbers

#include <iostream>
using namespace std;

int main()
{
    int choice;

    // Prompt the user for their choice:
    cout << "What would you like to do?\n"
         << "1. Find even numbers 0 - N\n"
         << "2. Find odd numbers 0 - N\n"
         << "3. Quit program\n"
         << "Enter your choice: ";
    cin >> choice;

    // TODO: Create a loop to perform desired operations until user chooses to exit:

    int n,
        counter = 0;

    while ( choice != 3 )
    {
        if ( choice == 1 )
        {
            cout << "Enter N: ";
            cin >> n;
            cout << "Even numbers: ";
            while ( counter <= n )
            {
                cout << counter << " ";
                counter += 2;
            }
            counter = 0;
            cout << endl;
            cout << "What would you like to do?\n"
                 << "1. Find even numbers 0 - N\n"
                 << "2. Find odd numbers 0 - N\n"
                 << "3. Quit program\n"
                 << "Enter your choice: ";
            cin >> choice;
        }
        else if ( choice == 2 )
        {
            cout << "Enter N: ";
            cin >> n;
            counter = 1;
            cout << "Odd numbers: ";
            while ( counter <= n )
            {
                cout << counter << " ";
                counter += 2;
            }
            counter = 0;
            cout << endl;
            cout << "What would you like to do?\n"
                 << "1. Find even numbers 0 - N\n"
                 << "2. Find odd numbers 0 - N\n"
                 << "3. Quit program\n"
                 << "Enter your choice: ";
            cin >> choice;
        }
        else
        {
            cout << "ERROR: Invalid choice. Select a valid menu item." << endl;
            cout << "What would you like to do?\n"
                 << "1. Find even numbers 0 - N\n"
                 << "2. Find odd numbers 0 - N\n"
                 << "3. Quit program\n"
                 << "Enter your choice: ";
            cin >> choice;
        }
    }


    // Display end of program message:
    cout << "Terminating program...\n";

    return 0;
}
