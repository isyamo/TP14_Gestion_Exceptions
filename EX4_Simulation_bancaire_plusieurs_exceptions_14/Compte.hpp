#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <iostream>
#include <string>
#include <stdexcept>

// exception montant invalide
class MontantInvalideException: public std::runtime_error {
public:
	MontantInvalideException(const std::string &message) :
			std::runtime_error(message) {
	}
};

// exception solde insuffisant pour un retrait
class SoldeInsuffisantException: public std::runtime_error {
public:
	SoldeInsuffisantException(const std::string &message) :
			std::runtime_error(message) {
	}
};

class Compte {
private:
	double solde;

public:
	// Constructeur
	Compte(double soldeInitial) {
		if (soldeInitial < 0) {
			solde = 0;
		} else {
			solde = soldeInitial;
		}
	}

	// Méthode pour dépot de l'argent
	void deposer(double montant) {
		if (montant < 0) {

			throw MontantInvalideException(
					"\n Erreur : Impossible de deposer un montant negatif !");
		}
		solde += montant;
		std::cout << "\n Depot reussi de " << montant << " DH. Nouveau solde : "
				<< solde << " DH" << std::endl;
	}

	// Méthode pour retirer de l'argent
	void retirer(double montant) {
		if (montant < 0) {

			throw MontantInvalideException(
					"\n Erreur : Impossible de retirer un montant negatif !");
		}
		if (montant > solde) {

			throw SoldeInsuffisantException(
					"\n Erreur : Solde insuffisant ! Solde actuel : "
							+ std::to_string(solde) + " DH");
		}
		solde -= montant;
		std::cout << "Retrait reussi de " << montant << " EUR. Nouveau solde : "
				<< solde << " DH" << std::endl;
	}

	// Consulter le solde
	double getSolde() const {
		return solde;
	}
};

#endif
