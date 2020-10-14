// Weston Dilling
// 09/14/2020
//CS1428 Lab
//Lab 2
//Description: this program will calculate the average score
//  of several Hogwarts houses and save the results in a file

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string name, house;
    int grade1, grade2, grade3;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("student_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open("Averages.txt"); // !!!Probably wrong!!!



    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << setw(10) << "Name" << setw(13) << "House" << "Average" << endl;

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file (x3):
    fin >> name >> house >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    fout << setw(10) << name << setw(13) << house << average << endl;
    fin >> name >> house >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    fout << setw(10) << name << setw(13) << house << average << endl;
    fin >> name >> house >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    fout << setw(10) << name << setw(13) << house << average << endl;

    cout << "Data written to averages.txt";

    // Close the input and output files:
    fout.close();
    fin.close();



    // Exit the program:
    return 0;
}
