#include "Rectangle.h"
#include <iostream>

void Rectangle::setLongueur(){
	float n_longueur;
	std::cout<<"Entrez une longueur pour votre rectangle"<<std::endl;
	std::cin>>n_longueur;
	Rectangle::longueur = n_longueur;
}

void Rectangle::setLargeur(){
	float n_largeur;
	std::cout<<"Entrez une largeur pour votre rectangle"<<std::endl;
	std::cin>>n_largeur;
	Rectangle::largeur = n_largeur;
}

float Rectangle::perimetre(){
	return (2*Rectangle::largeur) +(2*Rectangle::longueur);
}

float Rectangle::surface(){
	return Rectangle::largeur*Rectangle::longueur;
}
