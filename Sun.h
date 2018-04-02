#pragma once
#include "entity.h"

class Sun : public entity
{
public:
	Sun() : entity(nullptr) {};
	~Sun();
	virtual void step(double deltaT);
};

