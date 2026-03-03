#include <iostream>

int main() {
    double saldo = 1000.0; // saldo inicial
    double monto;
    int opcion;
    int transacciones = 0;
    bool salir = false;

    do {
        std::cout << "\n===== CAJERO AUTOMATICO =====\n";
        std::cout << "1. Depositar\n";
        std::cout << "2. Retirar\n";
        std::cout << "3. Consultar saldo\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: // Depositar
                std::cout << "Ingrese monto a depositar: ";
                std::cin >> monto;

                if (monto > 0) {
                    saldo += monto; // acumulador
                    transacciones++; // contador
                    std::cout << "Deposito exitoso.\n";
                } else {
                    std::cout << "Monto invalido.\n";
                }
                break;

            case 2: // Retirar
                std::cout << "Ingrese monto a retirar: ";
                std::cin >> monto;

                if (monto > 0 && monto <= saldo) {
                    saldo -= monto; // acumulador
                    transacciones++; // contador
                    std::cout << "Retiro exitoso.\n";
                } else {
                    std::cout << "Error: saldo insuficiente o monto invalido.\n";
                }
                break;

            case 3: // Consultar
                std::cout << "Saldo actual: $" << saldo << "\n";
                transacciones++; // cuenta la consulta
                break;

            case 4: // Salir
                salir = true;
                break;

            default:
                std::cout << "Opcion no valida.\n";
        }

    } while (!salir);

    std::cout << "\nNumero total de transacciones: " << transacciones << "\n";
    std::cout << "Gracias por usar el cajero.\n";

    return 0;
}

