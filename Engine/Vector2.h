#pragma once
#include <cmath>

class Vector2
{
public:
	Vector2() = default;
	Vector2(float in_x, float in_y);
	Vector2 operator+(const Vector2 rhs) const;
	Vector2& operator+=(const Vector2 rhs);
	Vector2 operator-(const Vector2 rhs) const;
	Vector2& operator-=(const Vector2 rhs);
	Vector2 operator*(const float rhs) const;
	float getLengthSq() const;
	float getLength() const;
	Vector2& Nomalize();
	Vector2 getNomalize() const;


public:
	float x;
	float y;
};