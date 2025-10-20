#include <iostream>
#include <string>

// Clase base
class Animal {
public:
    void hablar() const {
        std::cout << "El animal hace un sonido genérico." << std::endl;
    }
};

// Clase derivada
class Perro : public Animal {
public:
    // Reescritura de método: hablamos de "sobrescritura simple"
    void hablar() const {
        std::cout << "El perro ladra." << std::endl;
    }
};

int main() {
    Animal a;
    Perro p;

    a.hablar(); // Llama al método de Animal
    p.hablar(); // Llama al método reescrito en Perro

    return 0;
}
