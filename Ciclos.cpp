#include <iostream>

int main() {
    int cantidad_sabores;

    // Solicitar al usuario la cantidad de sabores de helado que desea (máximo 6)
    std::cout << "Ingrese la cantidad de sabores de helado que desea (máximo 6): ";
    std::cin >> cantidad_sabores;

    // Verificar si la cantidad ingresada está dentro del rango permitido
    if (cantidad_sabores < 1 || cantidad_sabores > 6) {
        std::cout << "La cantidad de sabores ingresada no es válida. Debe ser un número entre 1 y 6." << std::endl;
        return 1;
    }

    // Arreglo para almacenar los sabores elegidos
    std::string sabores[6];

    // Solicitar al usuario el sabor para cada bola de helado
    std::cout << "Ingrese el sabor para cada bola de helado:" << std::endl;
    for (int i = 0; i < cantidad_sabores; ++i) {
        std::cout << "Sabor #" << (i + 1) << ": ";
        std::cin >> sabores[i];
    }

    // Mostrar la lista de sabores elegidos
    std::cout << "Usted ha elegido los siguientes sabores de helado:" << std::endl;
    for (int i = 0; i < cantidad_sabores; ++i) {
        std::cout << "- " << sabores[i] << std::endl;
    }

    return 0;
}
