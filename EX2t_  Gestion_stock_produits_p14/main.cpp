#include <iostream>
#include "Produit.hpp"

int main() {
	try {
		// On crée un produit  un stock de 5 unités
		Produit p1("Stylo", 5);
		p1.afficher();

		std::cout << "\n <<< Vente de 2 stylos >>> " << std::endl;
		p1.vendre(2);
		std::cout << "\n <<< Vente de 10 stylos >>> " << std::endl;
		p1.vendre(10); // Va déclencher l'exception car 10 > 3

	} catch (const StockInsuffisantException &e) {
		// On attrape l'erreur ici pour éviter que le programme ne plante
		std::cerr << " \n [Exception attrapee] " << e.what() << std::endl;
	}

	return 0;
}
