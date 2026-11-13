#ifndef DIVISION_HPP
#define DIVISION_HPP

#include <stdexcept>

// Fonction de division sécurisée
double diviser(int a, int b) {
	if (b == 0) {
		//exception
		throw std::runtime_error("Erreur : Division par zéro impossible !");
	}
	// Conversion en double
	return static_cast<double>(a) / b;
}

#endif
