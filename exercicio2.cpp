#include <iostream>
using namespace std;

void imprimirLinha() {
    for (int i = 0; i < 30; i++) {
       std:: cout << "-";
    }
    std::cout << endl;
}

int main() {
    imprimirLinha();
    std::cout << "Exemplo de uso da função!" << std::endl;
    imprimirLinha();

    return 0;
}