#include "Disque.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

int main() {
	int choix;
	float perimetre;
	float surface;
	Rectangle rectangle;
        Triangle triangle;
        Disque disque;
	std::cout<<"Selectionner une figure : "<<std::endl;
	std::cout<<"1 - Rectangle"<<std::endl;
	std::cout<<"2 - Triangle"<<std::endl;
	std::cout<<"3 - Disque"<<std::endl;
	std::cin>>choix;
	std::cout<<"Votre choix est "<<choix<<std::endl;
	switch (choix)
	{
	case 1 :
		rectangle.setLargeur();
		rectangle.setLongueur();
		perimetre = rectangle.perimetre();
		surface = rectangle.surface();
		break;
	case 2 :
		triangle.setBase();
		triangle.setHauteur();
		perimetre = triangle.perimetre();
		surface = triangle.surface();
		break;
	case 3 :
		disque.setRayon();
		perimetre = disque.perimetre();
		surface = disque.surface();
		break;
	};
	std::cout<<"Le perimetre de votre figure est : "<<perimetre<<std::endl;
	std::cout<<"La surface de votre figure est : "<<surface<<std::endl;
	return 0;
}
