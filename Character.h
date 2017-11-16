#pragma once

#include "Entity.h"

// Unlike every Entities, Characters can be controlled with keyboard

class Character: public Entity
{
public:
	Character(const char* sprite, int x, int y);
	~Character();
};
