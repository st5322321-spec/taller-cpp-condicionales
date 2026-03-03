#include <iostream>

int main() {
    int anio;
    bool divisible4;
    bool divisible100;
    bool divisible400;
    bool esBisiesto;

    std::cout << "Ingrese un anio: ";
    std::cin >> anio;

    divisible4 = (anio % 4 == 0);
    divisible100 = (anio % 100 == 0);
    divisible400 = (anio % 400 == 0);

    std::cout << "\nRazonamiento:\n";
    std::cout << "Divisible entre 4: " << divisible4 << "\n";
    std::cout << "Divisible entre 100: " << divisible100 << "\n";
    std::cout << "Divisible entre 400: " << divisible400 << "\n";

    esBisiesto = (divisible4 && !divisible100) || divisible400;

    std::cout << "\nConclusion:\n";
    if (esBisiesto) {
        std::cout << "El anio " << anio << " ES bisiesto." << "\n";
    } else {
        std::cout << "El anio " << anio << " NO es bisiesto." << "\n";
    }

    return 0;
}
