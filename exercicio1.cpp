#include <iostream>
using namespace std;

float media(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float nota1, nota2, nota3;

    std::cout << "Digite a nota 1: " << std::endl;
    std::cin >> nota1;
    std::cout << "Digite a nota 2: " << std::endl;
    std::cin >> nota2;
    std::cout << "Digite a nota 3: " << std::endl;
    std::cin >> nota3;

    std::cout << "Média: " << media(nota1, nota2, nota3) << std::endl;

    return 0;
}