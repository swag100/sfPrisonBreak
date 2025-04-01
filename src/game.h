#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"

class Game {
private:
	//IMPORTANT: AMPERSAND IS THERE TO DENOTE IT IS A REFERENCE (akin to python variables)
	sf::RenderWindow& window;
	sf::Clock deltaClock;

	//temp
	std::vector<Player> players;

	void start();

	void handleEvents();
	void update();
	void draw();

public:
	bool done{};

	Game(sf::RenderWindow& window);
	void run();
};