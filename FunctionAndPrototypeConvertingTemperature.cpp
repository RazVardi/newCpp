#include <iostream>
#include <cmath>
using namespace std;

//----FUNCTION PROTOTYPES BELOW THIS LINE----
double fahrenheit_to_celsius(double fahrenheit_temperature);
double fahrenheit_to_kelvin(double fahrenheit_temperature);
//---- FUNCTION PROTOTYPES ABOVE THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {

    //---- FUNCTION CALLS BELOW THIS LINE----
    double fahrenheit_to_celsius(double fahrenheit_temperature);
    double fahrenheit_to_kelvin(double fahrenheit_temperature);
    double celsius_temperature = fahrenheit_to_celsius( fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin (fahrenheit_temperature);

    //----FUNCTION CALLS ABOVE THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//---- FUNCTION DEFINITIONS BELOW THIS LINE----
double fahrenheit_to_celsius(double fahrenheit_temperature)
{
    return round((5.0 / 9.0) * (fahrenheit_temperature - 32));
}
double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
    return round((5.0 / 9.0) * (fahrenheit_temperature - 32) + 273);
}

int main()
{
    temperature_conversion(200);

    return 0;
}