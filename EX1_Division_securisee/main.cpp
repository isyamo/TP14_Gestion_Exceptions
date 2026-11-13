#include <iostream>
#include "Division.hpp"

int main() {
	//  Division normale
	try {
		std::cout << "\n <<<  Division normale >>> " << std::endl;
		double resultat = diviser(10, 2);
		std::cout << "\n Resultat : " << resultat << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "\n Exception : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Division par zéro
	try {
		std::cout << "\n <<< Division par zero >>> " << std::endl;
		double resultat = diviser(10, 0);
		std::cout << "\n Resultat : " << resultat << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "\n Exception attrapee -> " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// 	Division normale
	try {
		std::cout << "\n <<< Division normale >>>" << std::endl;
		double resultat = diviser(7, 3);
		std::cout << "\n Resultat : " << resultat << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "\n Exception : " << e.what() << std::endl;
	}

	return 0;
}
