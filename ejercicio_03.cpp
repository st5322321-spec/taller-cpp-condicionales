#include <iostream>


const int LEER = 0b001;      // 1
const int ESCRIBIR = 0b010;  // 2
const int EJECUTAR = 0b100;  // 4

int main() {
    int permisos;

    std::cout << "Ingrese el valor entero de permisos (0 a 7): ";
    std::cin >> permisos;

    std::cout << "\nPermisos otorgados:\n";

    if (permisos & LEER) {
        std::cout << "- Leer\n";
    }
    if (permisos & ESCRIBIR) {
        std::cout << "- Escribir\n";
    }
    if (permisos & EJECUTAR) {
        std::cout << "- Ejecutar\n";
    }

    if (!(permisos & (LEER | ESCRIBIR | EJECUTAR))) {
        std::cout << "- Ninguno\n";
    }

    int permisosNegados = ~permisos;
    std::cout << "\nValor con permisos negados (~): " << permisosNegados;

    return 0;
}
