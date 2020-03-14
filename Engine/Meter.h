#pragma once

#include "Graphics.h"

class Meter
{
public:
	Meter(int in_x, int in_y)
		:x(in_x),
		y(in_y)
	{
	}
	void draw(Graphics& gfx) const
	{		
		gfx.DrawRect(x, y, Width, Height, c);
	}
	void increaseWidth()
	{
		if (!barHitScreen)
		{
			Width += point;
		}
		if (x + Width >= Graphics::ScreenWidth)
		{
			Width = Graphics::ScreenWidth - 1 - x * 2;
			barHitScreen = true;
		}
	}
private:
	static constexpr Color c = Colors::Blue;
	int x;
	int y;
	static constexpr int Height = 15;
	int Width = 0;
	static constexpr int point = 5;
	bool barHitScreen = false;
 };