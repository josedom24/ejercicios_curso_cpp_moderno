#include <iostream>
#include <map>
#include <string>

void mostrar(const std::map<std::string, int>& datos) {
    for (const auto& par : datos) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
}

int main() {
    std::map<std::string, int> edades {
        {"Ana", 25},
        {"Luis", 30},
        {"María", 28}
    };

    mostrar(edades);

    return 0;
}



