// Author Nikolas Beier

// temperature_converter.cpp : This file contains the function "main". This is where the execution of the program begins and ends.
//

#include "Temp.h"


int main()
{
    char again = 'x';
    cout << "Hello!\n";
    do {
        user_interact();
        cout << "Again? (y/n)\n";
        cin >> again;
    } while (tolower(again) == 'y');

    cout << "Bye!\n";
    keep_window_open();
}
