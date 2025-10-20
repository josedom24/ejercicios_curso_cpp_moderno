#include <iostream>
using namespace std;

int main() {
    // Mostrar las tablas de multiplicar del 1 al 5
    for (int num = 1; num <= 5; ++num) {
        cout << "\nTabla del " << num << ":\n";
        cout << "-----------------\n";
        for (int i = 1; i <= 10; ++i) {
            cout << num << " x " << i << " = " << num * i << '\n';
        }
    }

    return 0;
}
