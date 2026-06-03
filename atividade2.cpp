#include <iostream> // essa biblioteca importa o cout e o cin

int main(){
	int idade = 0;
	std::cout << "Digite uma idade: ";
    std::cin >> idade;
	std::cout << "Idade: " << idade << " anos!"<< std::endl;	
	return 0;
}
