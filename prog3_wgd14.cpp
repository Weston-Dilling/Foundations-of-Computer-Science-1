/*
   File: prog3_wgd14.cpp

   Author: Weston Dilling
   C.S.1428.002
   Lab Section: L02
   Program: #3
   Due Date: 10/14/20

   This program reads a simple expression of the form 'value operator value'
   from the keyboard only using one read statement to "get" the parts of the
   expression entered. The prompt and input expression are kept on one line.
   After the expression is entered at the keyboard and the enter key is hit,
   two blank lines are printed to the screen.

   The expression is evaluated as described below:
   The program checks for addition (+), subtraction (-), multiplication (*),
   and division (/) operators. When the division operator is encountered, a
   check for division by zero is included. A check for an invalid operator
   is included as well. (e.g. 134.6 ! 23.1) A switch statement with a nested
   double-sided alternative for handling the division operator is used to solve
   the problem as these mutually exclusive events suggest.

   The original expression is displayed to the console along with the
   evaluated result IF the operator is a valid one. If division by zero is
   encountered, the original expression is displayed to the console along with
   the message 'Division by zero produces an undefined result.'
   (without quotation marks.) If an invalid operator is encountered, the
   original expression is displayed to the console along with the message
   'Encountered unknown operator.' (without quotation marks.)

   An attempt to avoid repetitive code is made.

   Layout and content of the output are shown in the samples below.

   Input (keyboard): expression from keyboard (allowing for real input data)
                     operand1   (double)
                     operatr    (char)
                     operand2   (double)

   Constants: none

   Output (console):
      Sample Console Display:

      Enter a binary expression of the form: operand operator operand
           <blank line>
           <blank line>
      Author's Name
      C.S.1428.?       // '?' represents author's three-digit lecture section #
      Lab Section: L?  // '?' represents student's two-digit lab section #
      --/--/--         // dashes represent due date, month/day/year
           <blank line>
      198.7 / 0   Division by zero produces an undefined result.

      OR

      Author's Name
      C.S.1428.?       // '?' represents author's three-digit lecture section #
      Lab Section: L?  // '?' represents student's two-digit lab section #
      --/--/--         // dashes represent due date, month/day/year
           <blank line>
      125 ? 28   Encountered unknown operator.

      OR

      Author's Name
      C.S.1428.?       // '?' represents author's three-digit lecture section #
      Lab Section: L?  // '?' represents student's two-digit lab section #
      --/--/--         // dashes represent due date, month/day/year
           <blank line>
      178.9 - 326.8 = -147.9

      ================================================

      <Output will vary based on actual input values.>
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main ( )
{
   double operand1,
          operand2,
          result;

   char operatr;

   cout << "Enter a binary expression in the form: operand operator operand ";
   cin >> operand1 >> operatr >> operand2;
   cout << endl << endl;

   cout << "Weston Dilling" << endl
        << "C.S.1428.002" << endl
        << "Lab Section: L02" << endl
        << "10/14/20" << endl << endl;

   cout << operand1 << " " << operatr << " " << operand2 << fixed
        << setprecision(1);

   switch ( operatr )
   {
      case '+':
                result = operand1 + operand2;
                cout << " = " << result << endl;
                break;
      case '-':
                result = operand1 - operand2;
                cout << " = " << result << endl;
                break;
      case '*':
                result = operand1 * operand2;
                cout << " = " << result << endl;
                break;
      case '/':
                if ( operand2 != 0 )
                {
                   result = operand1 / operand2;
                   cout << " = " << result << endl;
                }
                else
                {
                   cout << "   Division by zero produces an undefined result."
                        << endl;
                }
                break;
      default:
               cout << "   Encountered an unkown operator." << endl;
   }

   system("PAUSE>NUL");

   return 0;
}
