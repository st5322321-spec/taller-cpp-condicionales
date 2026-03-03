#include <iostream>
#include <cmath> 


int main() {
    double lado1, lado2, lado3;

    std::cout << "Ingrese el primer lado: ";
    std::cin >> lado1;
    std::cout << "Ingrese el segundo lado: ";
    std::cin >> lado2;
    std::cout << "Ingrese el tercer lado: ";
    std::cin >> lado3;

    if (lado1 > 0 && lado2 > 0 && lado3 > 0 &&
        lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1) {

        std::cout << "El triangulo es valido." << "\n";

        
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "Tipo por lados: Equilatero" << "\n";
        } 
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "Tipo por lados: Isosceles" << "\n";
        } 
        else {
            std::cout << "Tipo por lados: Escaleno" << "\n";
        }

        
        double a2 = pow(lado1, 2);
        double b2 = pow(lado2, 2);
        double c2 = pow(lado3, 2);

        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
            std::cout << "Tipo por angulos: Rectangulo" << "\n";
        } 
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
            std::cout << "Tipo por angulos: Acutangulo" << "\n";
        } 
        else {
            std::cout << "Tipo por angulos: Obtusangulo" << "\n";
        }

    } else {
        std::cout << "Los lados ingresados NO forman un triangulo valido." << "\n";
    }

    return 0;
}

