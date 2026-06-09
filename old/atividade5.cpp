#include <iostream>
using namespace std;

int main() {
    int nota;

    std::cout << "Digite a nota (0 a 100): " << std::endl;
    std::cin >> nota;

    if (nota >= 90) {
        std::cout << "Excelente" << std::endl;
    } else if (nota >= 70) {
        std::cout << "Bom" << std::endl;
    } else {
        std::cout << "Precisa melhorar" << std::endl;
    }

    return 0;
}