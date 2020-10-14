/*
   File: prog2_wgd14.cpp

   Author: Weston Dilling
   C.S.1428.002
   Lab Section: L02
   Program: #2
   Due Date: 09/30/20

   This program prompts the user to enter the amount of a purchase (in cents).
   It then prompts the user to enter the amount received in payment (in cents).
   It calculates the amount of change due, printing the results to an output
   file. The author's identifying information is provided followed by the
   number of each coin to be given in change: the number of dollars, half
   dollars, quarters, dimes, nickels and pennies are listed in tabular form.
   Monetary amounts are displayed to two decimal places.

   An appropriate message is displayed to the console screen if the output
   file fails to open.

   An appropriate message is written to the console screen informing the
   user of the output file name to which the results have been written.
   The layout and content of the file output are shown in the sample below.

   Input (keyboard):
          purchase amount, integer (in cents)
          payment amount, integer (in cents)

   Constants: none

   Output (screen):

         Author's Name
         C.S.1428.?         // '?' represents three-digit lecture section number
         Lab Section: L?    // '?' represents two-digit lab section number
         --/--/--           // dashes represent due date, month/day/year
              <blank line>
              <blank line>
         <Appropriate message indicating the name of the output file.>

   Output (file - prog2_?out.txt): // '?' represents three-digit lecture sec #

         Author's Name
         C.S.1428.?         // '?' represents three-digit lecture section number
         Lab Section: L?    // '?' represents two-digit lab section number
         --/--/--           // dashes represent due date, month/day/year
              <blank line>
         Received ? for a purchase of ?
              <blank line>
            Change in coins:
         Coin           Number
         ---------------------
         Dollars           ?
         Half Dollars      ?
         Quarters          ?
         Dimes             ?
         Nickels           ?
         Pennies           ?

   ================================================

   <Output will vary based on actual input values.>
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{

   int cost,
       ammount_paid,
       change,
       dollars = 0,
       half_dollars = 0,
       quarters = 0,
       dimes = 0,
       nickels = 0,
       pennies = 0;

   cout << "Enter the ammount of the purchase (in cents): " ;
   cin >> cost;
   cout << "Enter the ammount recieved in payment (in cents): " ;
   cin >> ammount_paid;
   cout << endl << endl;

   change = ammount_paid - cost;

   if ( change >= 100 )
   {
       dollars = change / 100;
       change = change % 100;
   }
   if ( change >= 50 )
   {
      half_dollars = change / 50;
      change = change % 50;
   }
   if ( change >= 25 )
   {
      quarters = change / 25;
      change = change % 25;
   }
   if ( change >= 10 )
   {
      dimes = change / 10;
      change = change % 10;
   }
   if ( change >= 5 )
   {
      nickels = change / 5;
      change = change % 5;
   }
   if ( change < 5 && change >= 0 )
      pennies = change;

   ofstream fout;
   fout.open( "prog2_002out.txt" );

   if ( !fout )
   {
      cout << "File failed to open. Terminating program";
      system("PAUSE>NUL");
      return -1;
   }

   fout << "Weston Dilling" << endl
        << "CS.1428.002" << endl
        << "Lab Section: L02" << endl
        << "09/30/20" << endl
        << endl;

   fout << "Recieved " << fixed << setprecision(2) << ammount_paid * 0.01
        << " for a purchase of "
        << cost * 0.01 << "." << endl
        << endl;

   fout << "  Change in coins" << endl
        << "Coin          Number" << endl
        << "--------------------" << endl
        << "Dollars" << setprecision(0) << setw(11) << dollars << endl
        << "Half Dollars" << setw(6) << half_dollars << endl
        << "Quarters" << setw(10) << quarters << endl
        << "Dimes" << setw(13) << dimes << endl
        << "Nickles" << setw(11) << nickels << endl
        << "Pennies" << setw(11) << pennies;

   cout << "Weston Dilling" << endl
        << "CS.1428.002" << endl
        << "Lab Section: L02" << endl
        << "09/30/20" << endl
        << endl << endl
        << "Program results have been written to prog2_out.txt";

   system("PAUSE>NUL");

   return 0;
}
