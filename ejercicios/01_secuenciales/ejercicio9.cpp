#include <iostream>

int main() {
    auto total_compra {0.0};
    constexpr double DESCUENTO {0.15};

    std::cout << "Introduce el total de la compra: ";
    std::cin >> total_compra;

    auto cantidad_descuento = total_compra * DESCUENTO;
    auto total_final = total_compra - cantidad_descuento;

    std::cout << "Descuento aplicado: " << cantidad_descuento << std::endl;
    std::cout << "Total a pagar: " << total_final << std::endl;

    return 0;
}
