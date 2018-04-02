#include "entity.h"

entity::entity(entity* parent)
{
	this->parent = parent;
}

entity::~entity()
{
}

void entity::tick(double deltaT) {
	this->step(deltaT);
	x += x_vel * deltaT;
	y += y_vel * deltaT;
}

double entity::getmass() {
	return mass;
}

void entity::setmass(double mass) {
	this->mass = mass;
}

double entity::getx() {
	return x;
}

double entity::gety() {
	return y;
}

void entity::setx(double x) {
	this->x = x;
}

void entity::sety(double y) {
	this->y = y;
}


double entity::getx_vel() {
	return this->x_vel;
}

double entity::gety_vel() {
	return this->y_vel;
}

void entity::setx_vel(double xvel) {
	this->x_vel = xvel;
}

void entity::sety_vel(double yvel) {
	this->y_vel = yvel;
}

entity* entity::getparent() {
	return parent;
}