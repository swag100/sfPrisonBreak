#pragma once

#include "SFML/Graphics.hpp"
#include "constants.h"

#include "player.h"

class Game {
private:
	sf::Clock deltaClock; // For delta time

	// -- Window and buffer
	sf::Vector2u bufferSize{ 
		constants::BUFFER_WIDTH, 
		constants::BUFFER_HEIGHT 
	};

	sf::RenderWindow window{ 
		sf::VideoMode(
			bufferSize.x * constants::ZOOM,
			bufferSize.y * constants::ZOOM
		), 
		constants::TITLE, 
		sf::Style::Close 
	};

	sf::View view{ 
		sf::Vector2f(bufferSize) / 2.0f,
		sf::Vector2f(bufferSize)
	};

	sf::RenderTexture buffer{};
	sf::Sprite bufferSprite{};

	//temp
	//std::vector<Player> players;
	Player player{ 28, 28 };

	// -- Game functions
	void handleEvents();
	void update();
	void draw();

public:
	Game();
	void run();
};