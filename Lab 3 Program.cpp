//Weston Dilling
//09/21/2020
//CS1428 Lab
//Lab 3
//Description: this program will allow the user to play a game of Orange,
//Yellow, Blue Lizard against a randomized computer opponent

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Orange" << endl
         << " 2. Blue" << endl
         << " 3. Yellow" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):
    if (user_num == 1 && comp_num == 2)
    {
        cout << "Orange beats Blue! You win!" << endl;
    }
    else if (user_num == 2 && comp_num == 3)
    {
        cout << "Blue beats Yellow! You win!" ;
    }
    else if (user_num == 3 && comp_num == 1)
    {
        cout << "Yellow beats Orange! You win!" ;
    }
    else if (user_num == 1 && comp_num == 3)
    {
        cout << "Yellow beats blue! You lose." ;
    }
    else if (user_num == 2 && comp_num == 1)
    {
        cout << "Orange beats blue! You lose." ;
    }
    else if (user_num == 3 && comp_num == 2)
    {
        cout << "Blue beats Yellow! You lose." ;
    }
    else if (user_num == 1 && comp_num == 1)
    {
        cout << "You both chose Orange! It's a tie!" ;
    }
    else if (user_num == 2 && comp_num == 2)
    {
        cout << "You both chose Blue! It's a tie!" ;
    }
    else if (user_num == 3 && comp_num == 3)
    {
        cout << "You both chose Yellow! It's a tie!" ;
    }
    else
    {
        cout << "ERROR - Invalid Input. Terminating Program." ;
    }
    // Exit the program:
    return 0;
}
