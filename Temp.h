// Author Nikolas Beier

#include <iostream>
using namespace std;

/*  
* On some Windows machines keep_window_open() function must be called 
* to prevent Windows from closing the window 
* before you had a chance to read the output.
*/
inline void keep_window_open()
{
    cin.get();
}

/**
 * Requests the temperature value from the end user.
 * 
 * @param unit unit of the requested temperature
 * @return returns the converted temperature
 */

double inquire_temperature(char unit);

/**
 * 
 * 
 * @param originTemperature first entered temperature
 * @param originUnit first entered unit 
 * @param targetTemperature End temperature
 * @param targetUnit End unit of temperature
 */

void temperature_output(double origin_temperature, char origin_unit,
    double target_temperature, char target_unit);

/**
* Converts from Celsius to Fahrenheit
*
*
*/

void c_to_f();

/**
* Converts from Celsius to Kelvin
*
*
*/

void c_to_k();

/**
* Converts from Fahrenheit to Celsius
*
*
*/

void f_to_c();

/**
* Converts from Fahrenheit to Kelvin
*
*
*/

void f_to_k();

/**
* Converts from Kelvin to Celsius
*
*
*/

void k_to_c();

/**
* Converts from Kelvin to Fahrenheit
*
*
*/

void k_to_f();

/**
* Requests the temperature unit from the end user.
* 
* @return Retruns the current selection of the user C, F or K
*/

char detect_selection();

/**
* Handles the application operations
* 
* 
*/

void user_interact();