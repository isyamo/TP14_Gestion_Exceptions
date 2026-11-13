#include <iostream>
#include "Fichier.hpp"

int main() {

	//ouverture d'un fichier inexistant
	try {
		std::cout << "\n <<<  Fichier inexistant >>> " << std::endl;
		lireFichier("inexistant.txt");

	} catch (const std::exception &e) {

		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Lecture d'un fichier valide

	try {
		std::cout << "\n <<< Fichier valide >>> " << std::endl;
		lireFichier("test.txt");

	} catch (const std::exception &e) {
		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	}

	return 0;
}
