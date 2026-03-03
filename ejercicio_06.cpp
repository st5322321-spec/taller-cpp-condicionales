#include <iostream>

int main() {
    int a, b;

    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;

    
    {
        std::cout << "\nMetodo (a): Variable temporal\n";
        int x = a;
        int y = b;

        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        int temp = x;
        x = y;
        y = temp;

        std::cout << "Despues: x = " << x << ", y = " << y << "\n";
    }

    
    {
        std::cout << "\nMetodo (b): Operaciones aritmeticas\n";
        int x = a;
        int y = b;

        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        x += y;   // x = x + y
        std::cout << "Paso 1 (x += y): x = " << x << ", y = " << y << "\n";

        y = x - y;
        std::cout << "Paso 2 (y = x - y): x = " << x << ", y = " << y << "\n";

        x -= y;
        std::cout << "Paso 3 (x -= y): x = " << x << ", y = " << y << "\n";
    }

    
    {
        std::cout << "\nMetodo (c): XOR\n";
        int x = a;
        int y = b;

        std::cout << "Antes: x = " << x << ", y = " << y << "\n";

        x ^= y;
        std::cout << "Paso 1 (x ^= y): x = " << x << ", y = " << y << "\n";

        y ^= x;
        std::cout << "Paso 2 (y ^= x): x = " << x << ", y = " << y << "\n";

        x ^= y;
        std::cout << "Paso 3 (x ^= y): x = " << x << ", y = " << y << "\n";
    }

    return 0;
}
