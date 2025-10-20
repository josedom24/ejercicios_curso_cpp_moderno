#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    int edad;
    double sueldo;
    std::string departamento;

public:
    // Constructor por defecto usando lista de inicialización
    Empleado() 
        : nombre{""}, edad{0}, sueldo{0.0}, departamento{""} 
    {}

    // Constructor con parámetros usando lista de inicialización
    Empleado(const std::string& n, int e, double s, const std::string& d) 
        : nombre{n}, edad{e}, sueldo{s}, departamento{d} 
    {}

    // Setters
    void setNombre(const std::string& n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setSueldo(double s) { sueldo = s; }
    void setDepartamento(const std::string& d) { departamento = d; }

    // Getters
    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getSueldo() { return sueldo; }
    std::string getDepartamento() { return departamento; }

    // Métodos de cálculo
    double calcularBono() {
        return sueldo * 0.10; // 10% del sueldo
    }

    double calcularSalarioAnual() {
        return sueldo * 12 + calcularBono();
    }

    // Método para mostrar información
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Sueldo mensual: " << sueldo << std::endl;
        std::cout << "Departamento: " << departamento << std::endl;
        std::cout << "Bono: " << calcularBono() << std::endl;
        std::cout << "Salario anual: " << calcularSalarioAnual() << std::endl;
        std::cout << "---------------------------" << std::endl;
    }
};

int main() {
    // Empleado usando constructor por defecto
    Empleado emp1;
    emp1.setNombre("Ana");
    emp1.setEdad(30);
    emp1.setSueldo(2500);
    emp1.setDepartamento("Ventas");

    // Empleado usando constructor con parámetros
    Empleado emp2("Luis", 40, 4000, "Marketing");

    // Mostrar información
    emp1.mostrarInformacion();
    emp2.mostrarInformacion();

    return 0;
}
