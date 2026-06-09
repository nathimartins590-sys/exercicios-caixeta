#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    std::cout << "Digite o primeiro número: " <<  std::endl;
    std::cin >> x;
    std::cout << "Digite o segundo número: " <<  std::endl;
    std::cin >> y;

    std::cout << "Antes:  x = " << x << ", y = " << y <<  std::endl;
    trocar(x, y);
    std::cout << "Depois: x = " << x << ", y = " << y <<  std::endl;

    return 0;
}