#include "playstate.h"
#include "game.h"

PlayState::PlayState(GameDataPtr data)
{

}

void PlayState::enter() {}
void PlayState::exit() {}

// -- State functions
void PlayState::handleEvent(sf::Event event)
{
	/*
	switch (event.type) {
	default:
		break;
	}
	*/
}

void PlayState::update(float deltaTime)
{
	//state does this later
	player.update(deltaTime);
}

void PlayState::draw(sf::RenderTexture& buffer)
{
	//state does this later
	player.draw(buffer);
}