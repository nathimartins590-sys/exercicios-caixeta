#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o valor " << i + 1 << ": " << std::endl;
        std::cin >> vetor[i];
        soma += vetor[i];
    }

    std::cout << "Soma do vetor: " << soma << std::endl;

    return 0;
}