#include <iostream>
#include <string>

int main() {
    int nota;
    std::string letra;
    std::string estado;

    std::cout << "Ingrese la nota del estudiante (0 - 100): ";
    std::cin >> nota;

    if (nota < 0 || nota > 100) {
        std::cout << "Error: la nota debe estar entre 0 y 100." << "\n";
        return 0;
    }
    if (nota >= 90) {
        letra = "A";
    } 
    else if (nota >= 80) {
        letra = "B";
    } 
    else if (nota >= 70) {
        letra = "C";
    } 
    else if (nota >= 60) {
        letra = "D";
    } 
    else {
        letra = "F";
    }
    if (nota >= 60) {
        estado = "Aprobado";
    } else {
        estado = "Reprobado";
    }

    std::cout << "\nLetra: " << letra << "\n";
    std::cout << "Estado: " << estado << "\n";

    return 0;
}
