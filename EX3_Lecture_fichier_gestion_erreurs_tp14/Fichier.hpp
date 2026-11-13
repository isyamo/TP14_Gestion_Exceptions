#ifndef FICHIER_HPP
#define FICHIER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

// Methode  pour lire un fichier ligne par ligne
void lireFichier(const std::string &nomFichier) {
	//  Ouvrir le fichier en mode lecture
	std::ifstream fichier(nomFichier);

	// Vérification d'ouvert correcte d'un fichier
	if (!fichier.is_open()) {

		throw std::runtime_error(
				"Erreur : Impossible d'ouvrir le fichier '" + nomFichier
						+ "' !");
	}

	// Lire et afficher le contenu ligne par ligne
	std::string ligne;
	std::cout << "\n <<<  Debut du fichier : " << nomFichier << " >>> "
			<< std::endl;

	while (std::getline(fichier, ligne)) {
		std::cout << ligne << std::endl;
	}

	std::cout << "\n <<< Fin du fichier >>> " << std::endl;

}

#endif
