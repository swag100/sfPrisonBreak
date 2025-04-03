#pragma once

#include "SFML/Graphics.hpp"

#include "statemachine.h"
#include "state.h"
#include "player.h"

//Right now, none of these are instantiated. How do we instantiate them, and give them the same values as in the game class?
// This is why I believe we're getting the _call error things.
struct GameData {
	StateMachine* stateMachine;
	sf::RenderWindow* window;
	sf::RenderTexture* buffer;
	sf::View* view;
};

typedef std::shared_ptr<GameData> GameDataPtr;

class Game {
private:
	sf::Clock deltaClock; // For delta time

	// -- Window and buffer
	sf::Vector2u bufferSize{};

	sf::RenderWindow window{};

	sf::View view{ 
		sf::Vector2f(bufferSize) / 2.0f,
		sf::Vector2f(bufferSize)
	};

	sf::RenderTexture buffer{};
	sf::Sprite bufferSprite{};

	// -- data, contains statemachine, window, buffer, view
	//GameDataPtr data = std::make_shared<GameData>();
	StateMachine* stateMachine{};

	// -- Game functions
	void handleEvents();
	void update();
	void draw();

public:
	Game(int width, int height, std::string title, int initScale);

	void run();
};