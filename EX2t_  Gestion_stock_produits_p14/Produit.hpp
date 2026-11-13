#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

//  Exception personnalisée
class StockInsuffisantException: public std::runtime_error {
public:
	StockInsuffisantException(const std::string &message) :
			std::runtime_error(message) {
	}
};

// Classe Produit
class Produit {
private:
	std::string nom;
	int stock;

public:
	// Constructeur
	Produit(std::string nomProduit, int stockInitial) {
		nom = nomProduit;
		stock = stockInitial;
	}

	void vendre(int quantite) {
		if (quantite > stock) {

			throw StockInsuffisantException(
					"\n Erreur : Stock insuffisant ! Il reste seulement "
							+ std::to_string(stock) + " unites.");
		}
		stock -= quantite;
		std::cout << "\n Vente reussie de " << quantite
				<< " unites. Stock restant : " << stock << std::endl;
	}

	void afficher() const {
		std::cout << "\n Produit : " << nom << " , Stock : " << stock
				<< std::endl;
	}
};

#endif
