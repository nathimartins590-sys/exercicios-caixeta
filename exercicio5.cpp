#include <iostream>
using namespace std;

float calcularArea(float base, float altura) {
    return base * altura;
}

void exibirResultado(float area) {
    std::cout << "Área do retângulo: " << area << std::endl;
}

int main() {
    float base, altura;

    std::cout << "Digite a base: " << std::endl;
    std::cin >> base;
    std::cout << "Digite a altura: " << std::endl;
    std::cin >> altura;

    float area = calcularArea(base, altura);
    exibirResultado(area);

    return 0;
}