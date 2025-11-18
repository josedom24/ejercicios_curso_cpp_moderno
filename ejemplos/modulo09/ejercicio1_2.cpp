#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Abrimos el archivo
    std::ifstream archivo("archivo.txt");
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir archivo\n";
        return 1;
    }

    int numero{};
    archivo >> numero; // Intento de lectura

    // Comprobación: ¿falló la lectura por formato o fin de archivo?
    if (archivo.fail()) {
        std::cerr << "Error al leer el número (fail)\n";
        return 1;
    }

    // Comprobación opcional: ¿ocurrió un error grave durante la operación?
    if (archivo.bad()) {
        std::cerr << "Error grave en el flujo (bad)\n";
        return 1;
    }

    std::cout << "Número leído: " << numero << '\n';
    std::cout << "Programa finalizado\n";

    return 0;
}

