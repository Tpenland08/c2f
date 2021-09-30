#include<iostream>
#include<cmath>
int main()
{
    float celsius, fahrenheit;

    /* Recieve celcius temperature from user */
    std::cin >> celsius;

    /* Calculate the temperature in fahrenheit from celcius */
    fahrenheit = (celsius*1.8)+32;

    /* Output the temperature in fahrenheit */
    std::cout << round(fahrenheit);

    /* Standard housekeeping */
    std::cout << std::endl;
    return 0;
}
