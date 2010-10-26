#include "Node.h"
#include "Soldier.h"
#include "Bullet.h"

Soldier::Soldier():Node()
{
	
}

Soldier::Soldier(int _nujoueur, int _team,int _x, int _y):Node(_x,_y){
	team=_team;
	nujoueur=_nujoueur;
	longueur=20;
	hauteur=10;
	speed=2;
}

Soldier::~Soldier(){
	
}

void Soldier::moveUp(){
	y=y-speed;
}

void Soldier::moveBack(){
	y=y+speed;
}

void Soldier::moveLeft(){
	x=x-speed;
}

void Soldier::moveRight(){
	x=x+speed;
}

bool Soldier::isActiv(){
	return activ;
}

int Soldier::getNuJoueur(){
	return nujoueur;
}

int Soldier::getTeam(){
	return team;
}

void Soldier::setTeam(int t){
	team=t;
}

void Soldier::setNuJoueur(int nu){
	nujoueur=nu;
}

void Soldier::setActiv(bool b){
	activ=b;
}

int Soldier::getSpeed(){
	return speed;
}


void fire(int _dx,int _dy){
	Bullet bul=Bullet(_dx,_dy);
	
}