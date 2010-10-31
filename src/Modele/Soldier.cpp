#include "Node.h"
#include "Soldier.h"
#include "Bullet.h"

Soldier::Soldier():Node()
{
	
}

Soldier::Soldier(int _nujoueur, int _team,int _x, int _y):Node(_x,_y){
	team=_team;
	nujoueur=_nujoueur;
	hp= 100;
	longueur=20;
	hauteur=10;
	speed=300;
	activ=true;
	symbole='c';
	dead=false;
}

Soldier::~Soldier(){
	
}

void Soldier::moveUp(float coeff,int h,int l){
	if(activ){
		float deca=(int)	(speed * coeff);
		if((int)(y - deca)>0)
			y= y - deca;
	}
	else{
		vehicleUti->moveUp(coeff, h, l);
	}
}

void Soldier::moveBack(float coeff,int h,int l){
	if(activ){
		int deca=(int)(speed * coeff);
		int temp = y+deca;
		if(temp+5 < l)
			y=y + deca;
	}
	else{
		vehicleUti->moveBack(coeff, h, l);
	}
	
}

void Soldier::moveLeft(float coeff,int h,int l){
	if(activ){
		float deca=(int)	(speed * coeff )	;
		if( (int)(x - deca)>0)
			x=x - deca ;
	}
	else {
		vehicleUti->moveLeft(coeff, h, l);
	}

}

void Soldier::moveRight(float coeff,int h,int l){
	if(activ){
		int deca=	(int)(speed* coeff );
		int temp = x+deca;
		if(temp-5 < h)
			x=x + deca;
	}
	else{
		vehicleUti->moveRight(coeff, h, l);
	}
}

bool Soldier::isActiv(){
	return activ;
}

bool Soldier::isDead(){
	return dead;
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

float Soldier::getSpeed(){
	return speed;
}

void Soldier::hit(int damages){
	if(activ){
		hp=hp-damages;
		if(hp <= 0){
			dead=true;
		}
	}
	else{
		vehicleUti->hit(damages);
		if(vehicleUti->isDestroyed()){
			dead=true;
		}
	}
	   
}

Vehicle* Soldier::getVehicle(){
	return vehicleUti;
}

void Soldier::enterVehicle(Vehicle* vehicle){
	if(!vehicle->isUsed()){
		vehicleUti=vehicle;
		activ=false;
	}
}

void Soldier::leaveVehicle(){
	delete vehicleUti;
	activ=true;
}


Bullet* Soldier::fire(int _dx,int _dy){
	Bullet* bul=new Bullet(x,y,_dx,_dy);
	return bul;
}