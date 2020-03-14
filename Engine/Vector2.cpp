#include "Vector2.h"

Vector2::Vector2(float in_x, float in_y)
	:
	x(in_x),
	y(in_y)
{

}

Vector2 Vector2::operator+(const Vector2 rhs) const
{
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2& Vector2::operator+=(const Vector2 rhs)
{
	return *this = *this + rhs;
}

Vector2 Vector2::operator-(const Vector2 rhs) const
{
	return Vector2(x - rhs.x, y - rhs.y);
}

Vector2& Vector2::operator-=(const Vector2 rhs)
{
	return *this = *this - rhs;
}

Vector2 Vector2::operator*(const float rhs) const
{
	return Vector2(x * rhs, y * rhs);
}

float Vector2::getLengthSq() const
{
	return x * x + y * y;
}

float Vector2::getLength() const
{
	return std::sqrt(getLengthSq());
}

Vector2& Vector2::Nomalize()
{
	return *this = getNomalize();
}

Vector2 Vector2::getNomalize() const
{
	float Len = getLength();
	if (Len != 0.0f)
	{
		return *this * (1.0f / Len);
	}
	else
	{
		return *this;
	}
}
