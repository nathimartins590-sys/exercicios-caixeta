#include <iostream>
using namespace std;

int main() {
    int idade;

    std::cout << "Digite sua idade: " << std::endl;
    std::cin >> idade;

    if (idade >= 18) {
        std::cout << "Maior de idade" << std::endl;
    } else {
        std::cout << "Menor de idade" << std::endl;
    }

    return 0;
}