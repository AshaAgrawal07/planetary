#pragma once
#include "entity.h"
class Planet : public entity
{
public:
	Planet(entity* parent) : entity(parent) {};
	~Planet();
	virtual void step(double deltaT);
};

