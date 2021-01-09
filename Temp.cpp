// Author Nikolas Beier

#include "Temp.h"

double
inquire_temperature(char unit)
{
    cout << "Please enter now the temperature in degrees " << unit << ": ";
    double temp;
    cin >> temp;
    while (cin.fail())
    {
        cerr << "Please enter a number!\n";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> temp;
    }

    return temp;
}

void 
temperature_output(double origin_temperature, char origin_unit,
    double target_temperature, char target_unit)
{
    cout << "Result: " << origin_temperature << " degrees " << origin_unit << " is "
        << target_temperature << " degrees " << target_unit << endl;
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
    double tk = tc + 273.15;
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
f_to_k()
{
    double tf = inquire_temperature('F');
    double tk = (tf - 32) * 5 / 9 + 273.15;
    temperature_output(tf, 'F', tk, 'K');
}

void
k_to_c()
{
    double tk = inquire_temperature('K');
    double tc = tk - 273.15;
    temperature_output(tk, 'K', tc, 'C');
}

void
k_to_f()
{
    double tk = inquire_temperature('K');
    double tf = (tk - 273.15) * 9 / 5 + 32;
    temperature_output(tk, 'K', tf, 'F');
}

char
detect_selection()
{
    char selection = 'x';
    while (tolower(selection) != 'c' && tolower(selection) != 'f' && tolower(selection) != 'k')
    {
        cin >> selection;
        if (tolower(selection) != 'c' && tolower(selection) != 'f' && tolower(selection) != 'k')
        {
            cerr << "Wrong entry! ( please enter c, f or k)\n";
        }
    }
    return selection;
}


void 
user_interact()
{
	cout << "Please enter the origin unit of the temperature: c=Celsius, f=Fahrenheit or k=Kelvin\n";
    char selection_origin = detect_selection();
    cout << "Please enter the target unit of the temperature: c=Celsius, f=Fahrenheit or k=Kelvin\n";
    char selection_target = detect_selection();

    switch (selection_origin)
    {
    case 'c':
        if (tolower(selection_target) == 'f') 
        {
            c_to_f();
        }
        else if (tolower(selection_target) == 'k')
        {
            c_to_k();
        }
        break;
    case 'f':
        if (tolower(selection_target) == 'c')
        {
            f_to_c();
        }
        else if (tolower(selection_target) == 'k')
        {
            f_to_k();
        }
        break;
    case 'k':
        if (tolower(selection_target) == 'c')
        {
            k_to_c();
        }
        else if (tolower(selection_target) == 'f')
        {
            k_to_f();
        }
        break;
    }

    /* 
    * If / Else
    * 
    if (tolower(selection_origin) == 'c' && tolower(selection_target) == 'f')
    {
        c_to_f();
    }
    else if (tolower(selection_origin) == 'c' && tolower(selection_target) == 'k')
    {
        c_to_k();
    }
    else if (tolower(selection_origin) == 'f' && tolower(selection_target) == 'c')
    {
        f_to_c();
    }
    else if (tolower(selection_origin) == 'f' && tolower(selection_target) == 'k')
    {
        f_to_k();
    }
    else if (tolower(selection_origin) == 'k' && tolower(selection_target) == 'c')
    {
        k_to_c();
    }
    else if (tolower(selection_origin) == 'k' && tolower(selection_target) == 'f')
    {
        k_to_f();
    }
    */
}