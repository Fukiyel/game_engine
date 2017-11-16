#pragma once

#include "Object.h"

// Unlike every Objects, Entities have stats such as HP and are more movable

class Entity: public Object
{
public:
	Entity(const char* sprite , int x, int y);
	~Entity();
};
