#include "planet.h"
#include <math.h>

Planet::~Planet()
{
}

double findAccel(double dist, double mass) {
	// g = -GM/r^2
	const double G = 0.6673;
	return G * mass / (dist*dist);
}

void Planet::step(double deltaT) {
	double xdis = this->getx() - this->getparent()->getx();
	double ydis = this->gety() - this->getparent()->gety();

	double accel = findAccel(sqrt(xdis*xdis + ydis * ydis), this->getparent()->getmass());

	double theta = atan2(xdis, ydis);
	double gx = accel * sin(theta) * (xdis > 0 ? -1 : -1);
	double gy = accel * cos(theta) * (ydis > 0 ? -1 : -1);

	/*
	// v = v0 + a*t
	double gx = 0;
	if (xdis != 0) {
		gx = findAccel(xdis, this->getmass()) * (xdis > 0 ? -1 : 1);
	}

	double gy = 0;
	if (ydis != 0) {
		gy = findAccel(ydis, this->getmass()) * (ydis > 0 ? -1 : 1);
	}*/
	
	this->setx_vel(this->getx_vel() + gx * deltaT);
	this->sety_vel(this->gety_vel() + gy * deltaT);
}