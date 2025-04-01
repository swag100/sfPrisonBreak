#pragma once
#include "SFML/Graphics.hpp"

class Game {
private:
	sf::RenderWindow window;
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