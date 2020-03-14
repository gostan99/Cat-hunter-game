#pragma once

#include"Graphics.h"
#include"Vector2.h"

class Creeper
{
public:
	void Init(Vector2 in_loc, Vector2 in_velocity);
	void update(float dt);
	void Draw(Graphics &gfx) const;
	float getWidth() const;
	float getHeight() const;
	Vector2 getLoc() const;
private:

	Vector2 loc;
	Vector2 velovity; 
	bool initialized = false;
	static constexpr float Width = 31.0f;
	static constexpr float Height = 31.0f;
};
