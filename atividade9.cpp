#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        std::cout << "Digite um número positivo: " << std::endl;
        std::cin >> numero;

        if (numero < 0) {
            std::cout << "Número inválido, tente novamente." << std::endl;
        }
    } while (numero < 0);

    std::cout << "Número válido: " << numero << std::endl;

    return 0;
}