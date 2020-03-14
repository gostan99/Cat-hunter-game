#include "Goal.h"
Goal::Goal(Vector2 in_Loc)
{
	Loc = in_Loc;
}

bool Goal::ProcessConsumption(const Cat& Cat)
{
	//cac bien dai dien cho Entity
	const float RectRight = Loc.x + width;
	const float RectBottom = Loc.y + height;

	//cac bien dai dien cho nguoi choi
	const float CatRight = Cat.getLoc().x + Cat.getWidth();
	const float CatBottom = Cat.getLoc().y + Cat.getHeight();

	return (RectRight >= Cat.getLoc().x &&
		Loc.x <= CatRight &&
		RectBottom >= Cat.getLoc().y &&
		Loc.y <= CatBottom);
}

void Goal::draw(Graphics& gfx) const
{
	gfx.DrawRect((int)Loc.x, (int)Loc.y, (int)width, (int)height, c);
}

void Goal::respawn(Vector2 in_Loc)
{
	Loc = in_Loc;
}

void Goal::colorUpdate() {
	if (ColorIsIncreasing)
	{
		if (c.GetR() >= 253)
		{
			ColorIsIncreasing = false;
		}
		else
		{
			c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
		}
	}
	else
	{
		if (c.GetR() <= 127)
		{
			ColorIsIncreasing = true;
		}
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
		}
	}
}
