#pragma once
#ifndef _GRILLE_
#define _GRILLE_

/**
 * @file probleme.cpp
 * Projet SDA
 * @author Regenwetter Simon et Talagrand Alban
 * @version 1 27/11/2021
 * @brief Projet SDA démineur - Exercice 1
 * Structures de donn�es et algorithmes - BUT 1 Paris 16
*/
#pragma once
struct Grille {
	unsigned int capacite; 	// capacite du Grille (>0)
	unsigned char* tab;	// support du Grille, un tableau alloue en memoire dynamique de taille fixee (capacite) 
};

/**
 * @brief Initialise une grille
 * @param[in] g : la grille
 * @param[in] capa : la capacité de la grille
 */
void initGrille(Grille& g, unsigned int capa);

/**
 * @brief Désaloue une grille en mémoire
 * @param[in] g : la grille
 */
void detruireGrille(Grille& g);

/**
 * @brief Lit l'item d'une grille
 * @param[in] g : la grille
 * @param[in] i : l'indice de l'item
 * @return L'item
 */
unsigned char lireGrille(const Grille& g, unsigned int i);

/**
 * @brief Modifie le contenu d'une grille
 * @param[in] g : la grille
 * @param[in] i : l'indice de la case à modifier
 * @param[in] it : l'item qui va modifier la case
 */
void ecrireGrille(Grille& g, unsigned int i, const unsigned char& it);
#endif