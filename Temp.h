
/**
 * Requests a temperature from the end user.
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
*
*
*
*/

void c_to_f();

/**
*
*
*
*/


void f_to_c();

/**
*
* 
* 
*/

void user_interact();