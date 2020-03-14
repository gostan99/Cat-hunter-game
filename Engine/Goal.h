#pragma once

#include"Cat.h"
#include"Graphics.h"
#include "Vector2.h"

class Goal
{
public:
	Goal(Vector2 in_Loc);
	bool ProcessConsumption(const Cat& Cat);
	void draw( Graphics& gfx) const;
	void respawn(Vector2 in_Loc);
	void colorUpdate();
private:
	Vector2 Loc;
	Color c = { 127,0,0 };
	bool ColorIsIncreasing = true;
	static constexpr float height = 15.0f;
	static constexpr float width = 15.0f;
};