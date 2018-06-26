// Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include "Game.h"
#include "Grid.h"
#include "Snake.h"
#include <vector>


Game loadEntities()
{
	Grid* grid = new Grid(50, 30);
	Snake* snake = new Snake(grid);
	return Game(grid, snake);
}

void init()
{
	Game game = loadEntities();
	game.gameLoop();
}

int main()
{
	init();
    return 0;
}

