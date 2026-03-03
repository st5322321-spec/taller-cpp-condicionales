# taller-cpp-condicionales
#include <iostream>
#include <iomanip>

int main()
{
    double celsius;
    double fahrenheit;
    double kelvin;
    double rankine;
    
    std::cout << "Ingrese la temperatura en celsius";
    std::cin >> celsius;
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9.0 / 5.0;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "fahrenheit: " << fahrenheit << "\n";
    std::cout << "kelvin: " << kelvin << "\n";
    std::cout << "rankine: " << rankine << "\n";

    return 0;
}
