#include <iostream>
#include <algorithm> 

int main() {
    double precioCompra;
    double descuentoTotal = 0.0;

    char tipoCliente; // 'V' = VIP, 'N' = Normal
    char cupon; // 'A', 'B', 'C'
    bool finDeSemana;

    std::cout << "Ingrese el monto de la compra: ";
    std::cin >> precioCompra;

    std::cout << "Tipo de cliente (V = VIP, N = Normal): ";
    std::cin >> tipoCliente;

    std::cout << "Codigo de cupon (A, B, C, N = ninguno): ";
    std::cin >> cupon;

    std::cout << "Es fin de semana? (1 = Si, 0 = No): ";
    std::cin >> finDeSemana;

    // ===============================
    // Descuento por tipo de cliente
    // ===============================
    if (tipoCliente == 'V' || tipoCliente == 'v') {
        descuentoTotal += 0.15; // 15%
    } else {
        descuentoTotal += 0.05; // 5%
    }

    // ===============================
    // Descuento por monto (if anidado)
    // ===============================
    if (precioCompra >= 500) {
        descuentoTotal += 0.10;
    } else {
        if (precioCompra >= 200) {
            descuentoTotal += 0.05;
        }
    }

    // ===============================
    // Descuento por cupon (switch)
    // ===============================
    switch (cupon) {
        case 'A':
        case 'a':
            descuentoTotal += 0.10;
            break;
        case 'B':
        case 'b':
            descuentoTotal += 0.07;
            break;
        case 'C':
        case 'c':
            descuentoTotal += 0.05;
            break;
        default:
            break; // sin cupon
    }

    // ===============================
    // Descuento por fin de semana
    // ===============================
    if (finDeSemana) {
        descuentoTotal += 0.05;
    }

    // ===============================
    // Limitar descuento maximo al 50%
    // ===============================
    descuentoTotal = std::min(descuentoTotal, 0.50);

    double precioFinal = precioCompra * (1 - descuentoTotal);

    std::cout << "\nDescuento total aplicado: " << descuentoTotal * 100 << "%\n";
    std::cout << "Precio final a pagar: $" << precioFinal << "\n";

    return 0;
}
