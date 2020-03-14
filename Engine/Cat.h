#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Creeper.h"
#include "Vector2.h"
#include"Mouse.h"

class Cat
{
public:
	Cat(Vector2 in_loc) { loc = in_loc; };
	void update();
	void Draw(Graphics &gfx) const;
	bool IsDead(const Creeper& Creeper);
	void ControlCat(const Keyboard& kbd, float dt);
	void ControlCat(const Mouse& mouse, float dt);
	Vector2 getLoc() const;
	void setLoc(Vector2 vec);
	void setSpeed(float in_speed);
	int getWidth() const;
	int getHeight() const;
private:
	Vector2 loc;
	float speed = 1.0f*60.0f;
	static constexpr int Width = 31;
	static constexpr int Height = 21;
};