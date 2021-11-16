#include<iostream>
#include<cmath>

void c2f()
{
  float celsius, fahrenheit;
   /* Recieve celcius temperature from user */
    std::cin >> celsius;

    /* Calculate the temperature in fahrenheit from celcius */
    fahrenheit = (celsius*1.8)+32;

    /* Output the temperature in fahrenheit */
    std::cout << round(fahrenheit);
}

void f2c(){
  float celsius, fahrenheit;
  /* Recieve fahrenheit temperature from user */
    std::cin >> fahrenheit;

    /* Calculate the temperature in celsius from fahrenheit */
    celsius = (fahrenheit-32)/1.8;

    /* Output the temperature in celsius */
    std::cout << round(celsius);
}

int main()
{
    char conversion;

std::cout << "to:\n";
std::cin >> conversion;

if(conversion == 'c'){

c2f();

}else if(conversion == 'f'){

f2c();

}else{
  std::cout << "Unsupported conversion.\nPlease Try again.\n";
}

    /* Standard housekeeping */
    std::cout << std::endl;
    return 0;
}
