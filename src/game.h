#pragma once
#include "SFML/Graphics.hpp"

class Game {
private:
	//IMPORTANT: AMPERSAND IS THERE TO DENOTE IT IS A REFERENCE (akin to python variables)
	sf::RenderWindow& window;
	sf::Clock deltaClock;

	void start();

	void handleEvents();
	void update();
	void draw();

public:
	bool done{};

	Game(sf::RenderWindow& window);
	void run();
};