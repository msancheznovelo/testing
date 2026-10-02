#include <iostream>
#include <random>

int main() {
    std::random_device semilla;
    std::mt19937 generador(semilla());
    std::uniform_int_distribution<int> distribucion(1, 1000);

    std::cout << "Generando 5 números aleatorios del 1 al 1000:\n";

    for (int i = 1; i <= 5; ++i) {
        std::cout << "Número " << i << ": "
                  << distribucion(generador) << '\n';
    }

    return 0;
}
