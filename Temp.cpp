// Author Nikolas Beier

#include <iostream>
#include "Temp.h"

using namespace std;


double
inquire_temperature(char unit)
{
    cout << "Please enter now the °" << unit << ": ";
    double temp;
    cin >> temp;

    return temp;
}

void 
temperature_output(double origin_temperature, char origin_unit,
    double target_temperature, char target_unit)
{
    cout << "Result: " << origin_temperature << "°" << origin_unit << " is "
        << target_temperature << "°" << target_unit << endl;
}

void
c_to_f()
{
    double tc = inquire_temperature('C');
    double tf = tc * 1.8 + 32;
    temperature_output(tc, 'C', tf, 'F');
}

void
c_to_k()
{
    double tc = inquire_temperature('C');
    double tk = ;
    temperature_output(tc, 'C', tk, 'K');
}

void
f_to_c()
{
    double tf = inquire_temperature('F');
    double tc = (tf - 32.0) / 1.8;
    temperature_output(tf, 'F', tc, 'C');
}

void
k_to_c()
{
    double tk = inquire_temperature('K');
    double tc = tk - 273.15;
    temperature_output(tk, 'K', tc, 'C');
}

void 
user_interact()
{
	cout << "Please enter c for °C-->°F or f for °F-->°C: \n";
    char selection = 'x';
    while (tolower(selection) != 'c' && tolower(selection) != 'f')
    {
        cin >> selection;
        if (tolower(selection) != 'c' && tolower(selection) != 'f')
        {
            cerr << "Wrong entry! ( please enter c or f)\n";
        }
    }
    if (tolower(selection) == 'c') 
    {
        c_to_f();
    }
    else if (tolower(selection) == 'f')
    {
        f_to_c();
    }
   
}