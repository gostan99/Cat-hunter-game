/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Cat.h"
#include "Creeper.h"
#include <random>
#include "Goal.h"
#include "FrameTimer.h"
#include "Meter.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */	
	void Title(int x, int y);
	void GameOver(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */	
	// de y thu tu khai bao cac bien o duoi RAT LA QUAN TRONG DE KHONG BI LOI!!!
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_real_distribution<float> xDist;// Random x
	std::uniform_real_distribution<float> yDist;// Random y
	std::uniform_int_distribution<int> Direct; // dung de tao 4 huong chuyen dong ngau nhien
	std::uniform_real_distribution<float> Speed; //tao toc do di chuyen ngau nhien

	FrameTimer ft;
	bool GameStart = false;
	bool isGameOver = false;
	Cat Cat;
	static constexpr int nCreepers = 5;
	Creeper Creepers[nCreepers];
	Goal Goal;
	Meter meter;
	/********************************/
};