/*
Erica LaBuono
Final Program - Menu for the applications previously made
Uses system() to run .exes
*/

#include <iostream>
using namespace std;

int main() {
    int option; // stores option number chosen by user

    do {
        system("cls");
        cout << "***********************************" << endl;
        cout << "*    Erica's Handy Dandy Apps     *" << endl;
        cout << "***********************************" << endl;
        cout << "* 1. Your Tax Calculator          *" << endl;
        cout << "* 2. Fancy Prime Number Generator *" << endl;
        cout << "* 3. Create a Calender            *" << endl;
        cout << "* 4. Loan Payment Buddy           *" << endl;
        cout << "* 5. Exit                         *" << endl;
        cout << "***********************************" << endl;
        cout << "Welcome! Please select an option: ";
        cin >> option; // store the input into option

        // Check which option the user entered using if-elseif-else.
        // Use system() to CLEAR screen, then run the correct program.
        if(option == 1) {
            // Run the tax program .exe
            system("cls");
            system("tax.exe");
            }
        else if(option == 2) {
            // Run prime number .exe
            system("cls");
            system("prime.exe");
            }
        else if(option == 3) {
            // Run calender .exe
            system("cls");
            system("calender.exe");
            }
        else if(option == 4) {
            // Run loan .exe
            system("cls");
            system("loan.exe");
            }
        else if(option == 5) {
            // This option doesn't clear the screen or run anything.
            // Closes the loop.
            cout << "Terminating..." << endl;
            }
        else {
            // If the user has entered something other than 1-5...
            cout << "Error! Invalid option entered. Please try again." << endl;
            system("pause");
            }
    }
        while(option != 5); // condition for do-while, continues looping until exit

        return 0;
}
