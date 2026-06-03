#include <iostream>
using namespace std;

int main() {
    int vetor[5];

    // Leitura dos valores
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o valor " << i + 1 << ": " << std::endl;
        std::cin >> vetor[i];
    }

    std::cout << "\nValores digitados:" << std::endl;

    // Impressão dos valores
    for (int i = 0; i < 5; i++) {
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}