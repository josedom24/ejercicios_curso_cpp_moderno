
#include <iostream>
#include <unordered_map>
#include <string>

void agregarTelefono(std::unordered_map<std::string, int>& telefonos) {
    telefonos["Pedro"] = 2222;
}

int main() {
    std::unordered_map<std::string, int> telefonos {
        {"Ana", 1234},
        {"Luis", 5678}
    };

    agregarTelefono(telefonos);

    for (const auto& par : telefonos) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}
