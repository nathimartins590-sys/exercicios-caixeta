#include <iostream>
using namespace std;

int main() {
    int matriz[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
             std::cout << "Digite o valor [" << i << "][" << j << "]: " <<  std::endl;
             std::cin >> matriz[i][j];
        }
    }

    std::cout << "\nMatriz:" <<  std::endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}