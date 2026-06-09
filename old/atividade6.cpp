#include <iostream>
using namespace std;

int main() {
    char opcao;

    std::cout << "Digite uma opcao (A, B ou C): " << std::endl;
    std::cin >> opcao;

    switch (opcao) {
        case 'A':
            std::cout << "Opcao A selecionada" << std::endl;
            break;
        case 'B':
            std::cout << "Opcao B selecionada" << std::endl;
            break;
        case 'C':
            std::cout << "Opcao C selecionada" << std::endl;
            break;
        default:
            std::cout << "Opcao invalida" << std::endl;
    }

    return 0;
}