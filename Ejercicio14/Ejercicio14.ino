#include <iostream>

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    // Pedir al usuario que introduzca los valores
    std::cout << "Introduce el valor de x: ";
    std::cin >> x;
    std::cout << "Introduce el valor de y: ";
    std::cin >> y;

    // Mostrar los valores antes del intercambio
    std::cout << "Antes del intercambio:\n";
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    // Llamar a la función para intercambiar los valores
    intercambiar(x, y);

    // Mostrar los valores después del intercambio
    std::cout << "Después del intercambio:\n";
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";

    return 0;
}
