#ifndef __PROJECTILE
#define __PROJECTILE
#include "Node.h"

/**
 Classe modélisant un projectile
 **/

class Projectile: public Node
{
public:
	Projectile();
	Projectile(int _dx,int _dy);
	~Projectile();
	
	//fonction qui déplace la balle
	void parcourir();
	
	//Getters and Setters
	
	int getSpeed();
	//void setSpeed(int _s);
	int getRange();
	//void setRange(int _r);
	int getPower();
	//void setPower(int _p);
	int getDx();
	//void setDx(int _dx);
	int getDy();
	//void setDy(int _dy);
	std::pair<double,double> getTrajectoryAB();

	
protected:
	// les coordonnées de la direction dans laquelle va le projectile.
	int dx;
	int dy;
	// la portée du projectile
	int range;
	//la vitesse du projectile
	int speed;
	// la puissance du projectile : le nombre de points de vie qu'il enlève
	int power;
	
	
};
#endif