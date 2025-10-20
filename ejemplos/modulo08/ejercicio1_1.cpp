#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    int x = v.at(10); // Error en tiempo de ejecución: acceso fuera de rango
    return 0;
}