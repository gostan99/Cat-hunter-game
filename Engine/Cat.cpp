#include "Cat.h"
#include "Graphics.h"

void Cat::update()
{	
	//Keep cat stay in the screen
	if (loc.x + Width >= Graphics::ScreenWidth)
	{
		loc.x = Graphics::ScreenWidth - 1 - Width;
	}
	if (loc.x <= 0)
	{
		loc.x = 1;
	}
	if (loc.y + Height >= Graphics::ScreenHeight)
	{
		loc.y = Graphics::ScreenHeight - 1 - Height;
	}
	if (loc.y <= 0)
	{
		loc.y = 1;
	}
}

void Cat::Draw(Graphics &gfx) const
{
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 0, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 1, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 8, 16, 16, 16);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 9, 71, 71, 71);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 2, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 8, 19, 19, 19);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 9, 215, 215, 215);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 10, 85, 85, 85);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 3, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 9, 70, 70, 70);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 10, 215, 215, 215);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 11, 88, 88, 88);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 17, 4, 4, 4);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 18, 27, 26, 25);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 19, 41, 42, 43);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 4, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 10, 72, 72, 72);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 11, 223, 223, 223);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 12, 83, 83, 83);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 16, 4, 4, 4);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 17, 37, 37, 37);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 18, 85, 86, 87);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 5, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 11, 53, 59, 66);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 12, 52, 58, 65);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 16, 41, 41, 41);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 17, 233, 233, 233);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 18, 90, 90, 90);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 6, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 4, 79, 68, 58);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 5, 80, 72, 48);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 6, 81, 75, 37);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 7, 80, 73, 37);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 8, 80, 73, 37);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 9, 80, 73, 37);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 10, 78, 71, 35);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 11, 66, 59, 24);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 12, 73, 66, 30);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 13, 81, 74, 37);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 14, 80, 77, 57);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 15, 48, 33, 26);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 16, 28, 35, 42);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 17, 214, 215, 216);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 18, 63, 62, 61);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 19, 51, 51, 43);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 7, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 2, 7, 6, 4);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 3, 140, 117, 95);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 4, 255, 251, 184);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 5, 254, 237, 201);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 6, 249, 214, 228);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 7, 249, 218, 227);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 8, 249, 218, 227);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 9, 249, 218, 227);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 10, 249, 214, 227);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 11, 251, 230, 234);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 12, 251, 229, 234);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 13, 249, 213, 227);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 14, 255, 251, 194);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 15, 248, 218, 160);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 16, 121, 108, 95);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 17, 44, 45, 46);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 18, 2, 1, 1);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 19, 32, 28, 29);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 8, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 2, 16, 13, 11);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 3, 253, 238, 174);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 4, 252, 221, 176);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 5, 243, 185, 245);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 6, 241, 171, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 7, 240, 165, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 8, 240, 167, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 9, 240, 168, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 10, 243, 185, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 11, 236, 118, 231);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 12, 236, 116, 229);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 13, 242, 180, 252);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 14, 246, 196, 229);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 15, 255, 251, 190);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 16, 210, 174, 131);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 18, 189, 167, 125);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 9, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 2, 17, 15, 9);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 3, 245, 206, 167);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 4, 246, 203, 244);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 5, 236, 111, 219);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 6, 237, 119, 211);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 7, 244, 190, 252);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 8, 241, 173, 252);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 9, 241, 175, 252);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 10, 243, 186, 252);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 11, 238, 136, 226);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 12, 239, 138, 225);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 13, 243, 189, 252);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 14, 236, 100, 216);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 15, 245, 195, 233);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 16, 189, 167, 125);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 18, 11, 11, 11);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 19, 24, 24, 24);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 10, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 2, 16, 15, 2);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 3, 242, 198, 177);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 4, 243, 183, 252);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 5, 239, 147, 234);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 6, 239, 148, 235);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 7, 243, 190, 252);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 8, 243, 187, 252);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 9, 239, 141, 230);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 10, 237, 100, 197);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 11, 244, 196, 253);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 12, 243, 188, 252);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 13, 240, 160, 245);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 14, 238, 132, 229);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 15, 244, 193, 252);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 16, 161, 134, 96);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 17, 13, 14, 14);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 18, 25, 27, 28);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 19, 31, 34, 36);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 20, 42, 46, 51);
	gfx.PutPixel((int)loc.x + 11, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 2, 16, 16, 1);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 3, 242, 198, 176);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 4, 242, 178, 252);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 5, 242, 182, 252);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 6, 243, 185, 252);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 7, 239, 146, 234);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 8, 241, 166, 245);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 9, 241, 167, 247);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 10, 240, 162, 244);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 11, 243, 189, 252);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 12, 242, 182, 252);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 13, 237, 100, 195);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 14, 239, 149, 242);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 15, 248, 217, 253);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 16, 157, 128, 91);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 17, 27, 28, 26);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 18, 37, 37, 35);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 19, 28, 29, 27);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 20, 4, 4, 4);
	gfx.PutPixel((int)loc.x + 12, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 2, 16, 16, 1);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 3, 242, 194, 173);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 4, 244, 190, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 5, 243, 187, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 6, 242, 181, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 7, 237, 100, 195);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 8, 239, 141, 229);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 9, 244, 191, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 10, 240, 163, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 11, 239, 158, 251);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 12, 246, 203, 253);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 13, 243, 190, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 14, 243, 187, 252);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 15, 246, 204, 253);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 16, 185, 156, 119);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 17, 99, 81, 57);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 18, 23, 24, 24);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 19, 28, 29, 27);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 20, 4, 4, 4);
	gfx.PutPixel((int)loc.x + 13, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 2, 16, 16, 1);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 3, 244, 209, 183);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 4, 239, 147, 236);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 5, 238, 125, 219);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 6, 242, 181, 252);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 7, 245, 197, 253);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 8, 245, 200, 253);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 9, 249, 223, 254);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 10, 235, 123, 216);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 11, 121, 34, 80);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 12, 128, 97, 133);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 13, 125, 84, 134);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 14, 136, 89, 148);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 15, 249, 221, 253);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 16, 195, 165, 128);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 18, 23, 24, 24);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 19, 40, 40, 37);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 20, 28, 29, 27);
	gfx.PutPixel((int)loc.x + 14, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 2, 16, 16, 1);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 3, 244, 211, 184);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 4, 238, 142, 233);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 5, 237, 115, 211);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 6, 247, 213, 253);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 7, 153, 106, 162);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 8, 90, 57, 96);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 9, 95, 69, 99);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 10, 81, 68, 89);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 11, 69, 90, 73);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 12, 51, 57, 48);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 13, 48, 66, 55);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 14, 24, 42, 43);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 15, 148, 117, 136);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 16, 224, 186, 148);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 15, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 2, 16, 16, 1);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 3, 242, 194, 173);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 4, 245, 198, 253);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 5, 247, 212, 253);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 6, 136, 97, 140);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 7, 43, 54, 41);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 8, 77, 89, 74);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 9, 58, 68, 56);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 10, 103, 112, 101);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 11, 211, 213, 212);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 12, 195, 202, 202);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 13, 244, 208, 206);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 14, 229, 195, 193);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 15, 82, 83, 65);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 16, 56, 44, 30);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 16, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 2, 16, 15, 5);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 3, 244, 208, 183);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 4, 238, 133, 228);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 5, 237, 130, 236);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 6, 40, 35, 52);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 7, 73, 94, 68);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 8, 234, 235, 234);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 9, 199, 199, 199);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 10, 187, 187, 187);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 11, 168, 169, 169);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 12, 168, 178, 179);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 13, 241, 171, 168);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 14, 246, 187, 184);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 15, 204, 202, 205);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 16, 58, 66, 73);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 17, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 2, 17, 14, 9);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 3, 243, 205, 179);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 4, 240, 162, 243);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 5, 239, 151, 245);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 6, 218, 172, 230);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 7, 68, 51, 71);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 8, 102, 114, 99);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 9, 193, 194, 193);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 10, 164, 163, 164);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 11, 221, 221, 221);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 12, 92, 94, 94);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 13, 98, 89, 88);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 14, 184, 171, 170);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 15, 190, 190, 190);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 16, 115, 116, 116);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 17, 28, 28, 28);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 18, 35, 36, 36);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 19, 3, 3, 3);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 20, 31, 34, 36);
	gfx.PutPixel((int)loc.x + 18, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 2, 17, 14, 10);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 3, 242, 198, 174);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 4, 243, 187, 252);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 5, 242, 177, 252);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 6, 245, 199, 253);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 7, 231, 170, 244);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 8, 67, 47, 68);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 9, 127, 132, 126);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 10, 196, 197, 196);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 11, 123, 123, 123);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 12, 25, 24, 24);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 13, 120, 126, 126);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 14, 57, 65, 65);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 15, 40, 41, 41);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 16, 104, 103, 103);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 17, 49, 50, 49);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 18, 49, 50, 48);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 19, 18, 18, 18);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 20, 20, 19, 19);
	gfx.PutPixel((int)loc.x + 19, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 2, 16, 12, 11);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 3, 240, 194, 179);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 4, 242, 176, 252);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 5, 242, 182, 252);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 6, 238, 133, 224);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 7, 240, 164, 252);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 8, 218, 157, 234);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 9, 24, 21, 25);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 10, 165, 170, 164);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 11, 168, 168, 168);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 12, 170, 170, 170);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 13, 185, 185, 185);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 14, 163, 163, 163);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 15, 48, 48, 48);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 16, 123, 123, 123);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 17, 40, 40, 40);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 18, 18, 18, 18);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 19, 1, 1, 1);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 20, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 2, 17, 13, 12);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 3, 245, 204, 164);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 4, 244, 188, 241);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 5, 242, 181, 252);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 6, 237, 109, 204);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 7, 238, 139, 233);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 8, 219, 166, 239);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 9, 29, 26, 30);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 10, 163, 167, 162);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 11, 171, 171, 171);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 12, 175, 175, 175);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 13, 186, 186, 186);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 14, 71, 71, 71);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 15, 40, 40, 40);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 16, 135, 135, 135);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 17, 24, 24, 24);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 18, 132, 132, 132);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 21, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 2, 17, 13, 12);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 3, 255, 234, 172);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 4, 253, 228, 173);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 5, 243, 177, 233);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 6, 242, 178, 252);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 7, 243, 186, 252);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 8, 215, 144, 236);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 9, 30, 28, 31);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 10, 164, 168, 162);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 11, 177, 177, 177);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 12, 173, 173, 173);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 13, 180, 180, 180);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 14, 77, 77, 77);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 15, 38, 38, 38);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 16, 112, 112, 112);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 17, 27, 27, 27);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 18, 25, 25, 25);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 19, 1, 1, 1);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 20, 60, 52, 44);
	gfx.PutPixel((int)loc.x + 22, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 2, 5, 4, 3);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 3, 116, 96, 79);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 4, 255, 249, 181);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 5, 254, 232, 190);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 6, 249, 212, 212);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 7, 252, 228, 219);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 8, 236, 183, 178);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 9, 19, 17, 18);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 10, 163, 166, 166);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 11, 179, 179, 179);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 12, 164, 164, 164);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 13, 146, 146, 146);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 14, 167, 167, 167);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 15, 55, 55, 55);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 16, 119, 119, 119);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 17, 101, 101, 101);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 18, 119, 119, 119);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 19, 17, 17, 17);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 20, 20, 19, 19);
	gfx.PutPixel((int)loc.x + 23, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 4, 60, 52, 44);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 5, 61, 55, 36);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 6, 62, 58, 27);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 7, 53, 51, 22);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 8, 52, 48, 19);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 9, 133, 133, 133);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 10, 165, 165, 167);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 11, 226, 226, 226);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 12, 134, 133, 133);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 13, 116, 120, 120);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 14, 51, 57, 57);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 15, 28, 28, 28);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 16, 124, 124, 124);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 17, 20, 20, 20);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 18, 20, 19, 19);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 19, 2, 1, 1);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 24, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 8, 32, 30, 31);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 9, 200, 200, 200);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 10, 192, 191, 191);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 11, 129, 129, 129);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 12, 17, 18, 18);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 13, 111, 107, 107);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 14, 163, 156, 156);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 15, 174, 174, 174);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 16, 144, 145, 145);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 18, 5, 4, 3);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 25, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 7, 68, 66, 67);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 8, 233, 233, 233);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 9, 197, 197, 197);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 10, 190, 190, 190);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 11, 149, 150, 150);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 12, 144, 154, 155);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 13, 235, 171, 167);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 14, 247, 190, 187);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 15, 222, 219, 219);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 16, 99, 102, 102);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 20, 60, 52, 44);
	gfx.PutPixel((int)loc.x + 26, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 6, 16, 16, 16);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 7, 217, 217, 217);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 8, 139, 139, 139);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 9, 118, 118, 118);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 10, 141, 141, 141);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 11, 213, 214, 214);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 12, 200, 208, 208);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 13, 249, 206, 204);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 14, 249, 206, 204);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 15, 103, 101, 101);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 27, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 6, 126, 126, 126);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 10, 14, 14, 14);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 11, 118, 118, 118);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 12, 102, 100, 100);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 13, 99, 107, 107);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 14, 86, 94, 94);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 28, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 20, 255, 255, 255);
	gfx.PutPixel((int)loc.x + 29, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 30, (int)loc.y + 21, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 0, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 1, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 2, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 3, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 4, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 5, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 6, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 7, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 8, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 9, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 10, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 11, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 12, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 13, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 14, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 15, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 16, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 17, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 18, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 19, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 20, 0, 0, 0);
	gfx.PutPixel((int)loc.x + 31, (int)loc.y + 21, 0, 0, 0);

}

bool Cat::IsDead(const Creeper& Creeper)
{
	//cac bien dai dien cho Entity
	const float CatRight = loc.x + Width;
	const float CatBottom = loc.y + Height;

	//cac bien dai dien cho nguoi choi
	const float CreeperRight = Creeper.getLoc().x + Creeper.getWidth();
	const float CreeperBottom = Creeper.getLoc().y + Creeper.getHeight();

	return (CatRight >= Creeper.getLoc().x &&
		loc.x <= CreeperRight &&
		CatBottom >= Creeper.getLoc().y &&
		loc.y <= CreeperBottom);
}

void Cat::ControlCat(const Keyboard& kbd, float dt)
{
	// dieu khien con meo
	if (kbd.KeyIsPressed(VK_UP))
	{
		loc.y -= speed * dt;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		loc.y += speed * dt;
	}

	if (kbd.KeyIsPressed(VK_LEFT))
	{
		loc.x -= speed * dt;
	}

	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		loc.x += speed * dt;
	}
}
void Cat::ControlCat(const Mouse& mouse, float dt)
{
	if (mouse.LeftIsPressed())
	{
		// tao vector cho vi tri cua con chuot
		Vector2 v_mouse;
		v_mouse.x = float(mouse.GetPosX());
		v_mouse.y = float(mouse.GetPosY());
		// vector nay co vai tro chi huong cho con meo di chuyen
		Vector2 v_cat;
		v_cat = v_mouse - loc;
		// chuan hoa do dai v_cat = 1
		v_cat.Nomalize();
		// cap nhat vi tri cua Cat
		loc += (v_cat * speed * dt);
	}	
}

Vector2 Cat::getLoc() const
{
	return loc;
}

void Cat::setLoc(Vector2 vec)
{
	loc = vec;
}

void Cat::setSpeed(float in_speed)
{
	speed = in_speed;
}

int Cat::getWidth() const
{
	return Width;
}

int Cat::getHeight() const
{
	return Height;
}

