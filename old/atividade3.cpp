#include <iostream>

int main() {
	int x = 0;
	int y = 0;
	std::cout << "informe um numero: ";
	std::cin >> x;
	std::cout << "informe outro numero: ";
	std::cin >> y;
	
	std::cout << "soma: " << x + y << std::endl;
	return 0;
}