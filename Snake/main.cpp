#include "stdafx.h"
#include "Game.h"
#include "Grid.h"
#include "Snake.h"
#include "EntityManager.h"


sf::RenderWindow sfWindow(sf::VideoMode(600, 600), "Snake");
Grid grid = Grid(60, 30);
EntityManager entityManager = EntityManager(grid);
Game game(sfWindow, entityManager);

int main()
{
	game.gameLoop();
    return 0;
}

