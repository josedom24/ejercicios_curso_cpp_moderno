#include <iostream>
#include <string>

int main() {

    //Definición de una cadena en C clísco
    //Tiene 5 caracteres, el último '\0'
    char saludo[] = "Hola";

    //Uso de la clase String
    std::string cadena1 {};
    std::string cadena2 {"Hola Mundo"};

    std::cout << cadena2 << std::endl;
    std::cout << cadena2[0] << std::endl;  // Imprime: H
    std::cout << cadena2.at(1) << std::endl;  // Imprime: o
    return 0;
}