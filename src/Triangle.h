#pragma once
#include "Figure.h"

class Triangle : Figure {

public :
	void setBase();
        void setHauteur();
        float perimetre();
        float surface();

private : 
	float base;
	float hauteur;

};
