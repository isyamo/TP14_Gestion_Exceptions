#include <iostream>
#include "Compte.hpp"

int main() {
	// creation  de compte avec un solde initial de 100 dh
	Compte monCompte(100.0);
	std::cout << "\n Compte cree avec un solde de : " << monCompte.getSolde()
			<< " DH\n" << std::endl;

	// Operation valide
	try {
		std::cout << "\n <<< Depot de 50 DH >>> " << std::endl;
		monCompte.deposer(50.0);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Erreur de montant négatif
	try {
		std::cout << "\n <<< Depot d'un montant negatif >>> " << std::endl;
		monCompte.deposer(-20.0);
	} catch (const MontantInvalideException &e) {
		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	} catch (const SoldeInsuffisantException &e) {
		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Erreur de solde insuffisant
	try {
		std::cout << "\n <<< Retrait avec solde insuffisant  >>> " << std::endl;
		monCompte.retirer(500.0);
	} catch (const MontantInvalideException &e) {
		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	} catch (const SoldeInsuffisantException &e) {
		std::cerr << "\n [Exception attrapee] " << e.what() << std::endl;
	}

	return 0;
}
