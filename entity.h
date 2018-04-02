#pragma once
class entity
{
private:
	entity* parent;
	double mass;
	double x;
	double y;
	double x_vel = 0;
	double y_vel = 0;
protected:
	// Abstract function to be overrode by children
	// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Classes/Abstract_Classes
	virtual void step(double deltaT) = 0;
public:
	entity(entity* parent);
	~entity();
	void tick(double deltaT);

	double getmass();
	void setmass(double mass);

	double getx();
	double gety();
	void setx(double x);
	void sety(double y);

	double getx_vel();
	double gety_vel();
	void setx_vel(double x_vel);
	void sety_vel(double y_vel);

	entity* getparent();
};

