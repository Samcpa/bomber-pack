#include "Grass.h"
#include "Node.h"


Grass::Grass():Node(){
	symbole='g';
}
Grass::Grass(int _x, int _y, int longueur, int hauteur): Node(_x,_y,longueur,hauteur)
{
	symbole = 'g';
}

Grass::~Grass(){
	
}