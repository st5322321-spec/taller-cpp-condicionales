#include <iostream>
#include <iomanip>


int main() {
    float peso; 
    float altura; 
    double imc; 

    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;

    std::cout << "Ingrese la altura (m): ";
    std::cin >> altura;

    if (peso <= 0 || altura <= 0) {
        std::cout << "Error: peso y altura deben ser positivos." << "\n";
        return 0;
    }

    imc = peso / (altura * altura);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nIMC: " << imc << "\n";

    if (imc < 18.5) {
        std::cout << "Clasificacion: Bajo peso\n";
        std::cout << "Accion sugerida: Mejorar alimentacion y consultar un profesional.\n";
    }
    else if (imc < 25.0) {
        std::cout << "Clasificacion: Normal\n";
        std::cout << "Accion sugerida: Mantener habitos saludables.\n";
    }
    else if (imc < 30.0) {
        std::cout << "Clasificacion: Sobrepeso\n";
        std::cout << "Accion sugerida: Incrementar actividad fisica y ajustar dieta.\n";
    }
    else if (imc < 35.0) {
        std::cout << "Clasificacion: Obesidad I\n";
        std::cout << "Accion sugerida: Plan nutricional y ejercicio supervisado.\n";
    }
    else {
        std::cout << "Clasificacion: Obesidad II\n";
        std::cout << "Accion sugerida: Consultar especialista de salud.\n";
    }

    return 0;
}
