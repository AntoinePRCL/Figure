#include "Disque.h"
#include <iostream>

void Disque::setRayon(){
	float n_rayon;
	std::cout<<"Entrez un rayon pour votre disque : ";
	std::cin>>n_rayon;
	Disque::rayon = n_rayon;
}

float Disque::perimetre(){
	return Disque::rayon*Disque::rayon*3.141592;
}

float Disque::surface(){
	return 3.141592*Disque::rayon*Disque::rayon;
}

