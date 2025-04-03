#pragma once

#include "game.h"

class PlayState : public State
{
private:
	Player player{ 28, 28 };

public:
	PlayState(GameDataPtr data);

	//State transitions
	void enter();
	void exit();

	// -- State functions
	void handleEvent(sf::Event event);
	void update(float deltaTime);
	void draw(sf::RenderTexture& buffer);
};