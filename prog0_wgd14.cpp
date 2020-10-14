/*
   File: prog0_wgd14.cpp

   Author: Weston Dilling
   C.S.1428.002
   Lab Section: L02
   Program: #0
   Due Date: 09/02/20
   Major: Electrical Engineering
   Minor: Computers

   Favorite Food: Spaghetti w/ meatsauce

   This program
       - writes the student's first and last names on the 1st line of output.
         e.g. John Smith
       - writes 'C.S.1428.?' (without quotation marks) on the 2nd line of
         output with the student's three-digit lecture section number in place
         of the question mark.
       - writes 'Lab Section: L?' (without quotation marks) on the 3rd line of
         output with the student's two-digit lab section number in place of the
         question mark.
       - writes this program's due date on the fourth line of output.
       - leaves line five blank.
       - writes 'Major: <student's major>'(without quotation marks)
         on the 6th line of output with the student's major in place of
         <student's major>.
       - writes 'Minor: <student's minor or specialization>' (without quotation
         marks)on the 7th line of output with the student's minor or
         specialization in place of <student's minor or specialization>.
         Note: The keyword 'Minor:' might be replaced with the keyword
         'Specialization:' or 'Concentration:' depending on the student.
       - leaves line eight blank.
       - writes 'Favorite Food: <student's favorite food>'
         (without quotation marks) on the 9th line of output replacing
		 <student's favorite food> with the student's favorite food.

      Input: none
   Constants: none
   Output (screen): Sample Output:

        Betty Boop
        C.S.1428.?        // '?' represents three-digit lecture section number
        Lab Section: L?   // '?' represents two-digit lab section number
        --/--/--          // dashes represent due date, month/day/year
           <blank line>
        Major: ?
        Minor: ?
           <blank line>
        Favorite Food: ?
*/

#include <iostream>

using namespace std;

int main ( )
{
   cout << "Weston Dilling" << endl
        << "C.S.1428.002" << endl
        << "Lab Section: L02" << endl
        << "09/03/20" << endl << endl;

   cout << "Major: Electical Engineering" << endl
        << "Minor: Computers" << endl << endl;

   cout << "Favorite Food: Spaghetti and Meatsauce" << endl;

   return 0;
}
