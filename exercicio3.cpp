#include <iostream>
using namespace std;

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2;

    std::cout << "Digite o primeiro número: " << std::endl;
    std::cin >> n1;
    std::cout << "Digite o segundo número: " << std::endl;
    std::cin >> n2;

    std::cout << "O maior é: " << maior(n1, n2) << std::endl;

    return 0;
}