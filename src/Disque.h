#pragma once
#include "Figure.h"
#include <iostream>

class Disque : Figure {

public :
	void setRayon();
        float perimetre();
        float surface();
private :
	float rayon;

};
