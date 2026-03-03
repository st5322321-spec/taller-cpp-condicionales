#include <iostream>
#include <cmath>    // Para fmod()

int main() {
    double num1, num2;
    char operador;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el operador (+, -, *, /, %): ";
    std::cin >> operador;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    switch (operador) {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << "\n";
            break;

        case '-':
            std::cout << "Resultado: " << num1 - num2 << "\n";
            break;

        case '*':
            std::cout << "Resultado: " << num1 * num2 << "\n";
            break;

        case '/':
            if (num2 == 0) {
                std::cout << "Error: division por cero." << "\n";
            } else {
                std::cout << "Resultado: " << num1 / num2 << "\n";
            }
            break;

        case '%':
            if (num2 == 0) {
                std::cout << "Error: modulo por cero." << "\n";
            } else {
                std::cout << "Resultado: " << fmod(num1, num2) << "\n";
            }
            break;

        default:
            std::cout << "Error: operador no valido." << "\n";
    }

    return 0;
}

