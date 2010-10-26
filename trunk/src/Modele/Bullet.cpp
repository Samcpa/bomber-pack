#include "Projectile.h"
#include "Bullet.h"

Bullet::Bullet():Projectile()
{
	
}

Bullet::Bullet(int _dx, int _dy): Projectile(_dx,_dy)
{	
	speed=5;
	range=400;
	power=20;
}


