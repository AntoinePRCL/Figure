#include "Triangle.h"
#include <iostream>
#include <cmath>

void Triangle::setBase(){
	float n_base;
	std::cout<<"Entrez une base pour votre triangle"<<std::endl;
	std::cin>>n_base;
	Triangle::base = n_base;
}

void Triangle::setHauteur(){
	float n_hauteur;
	std::cout<<"Entrez une hauteur pour votre triangle"<<std::endl;
	std::cin>>n_hauteur;
	Triangle::hauteur = n_hauteur;
}

float Triangle::surface(){
	return (Triangle::base*Triangle::hauteur)/2;
}

float Triangle::perimetre(){
	float hypo = sqrt((Triangle::base*Triangle::base) + (Triangle::hauteur*Triangle::hauteur));
	return Triangle::base+Triangle::hauteur+hypo;
}
