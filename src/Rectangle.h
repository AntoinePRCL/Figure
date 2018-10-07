#pragma once
#include "Figure.h"

class Rectangle : Figure {

public:
	void setLongueur();
        void setLargeur();
        float perimetre();
        float surface();

private:
	float longueur;
	float largeur;
};
