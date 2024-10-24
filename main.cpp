#include <iostream> //input output stream
#include <iomanip> // setprecision, fixed
#include "banking.h" // many things
#include <conio.h> // _getch()
using namespace std;
/*
*   Alex Chadburn 10/5/24
* 
* Monthly compounded interest calculator.
* 
*/

void clearScreen() { //clears terminal screen after each iteration, looks cleaner.
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    char choice; // user input determines whether to exit out of program
    do {
        clearScreen();
        banking bank; // starts the investments process using the default banking::banking()  
        bank.printROI(); //prints return on investment
            cout << "Do you want to try other values? (y/n): ";
            do {
            choice = _getch(); //I love _getch
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'); //while the user choice isn't a valid choice
    } while (choice == 'y' || choice == 'Y'); // checks if the user wants to continue
    // if the choice is n, exits loop
    cout << "\nI hope you enjoyed, and learned at least something about monthly compounded interest.";
    int warning = _getch(); // gets rid of warning from unused _getch() (which was being used)
    return 0;
}
