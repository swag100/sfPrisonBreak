#pragma once

// Forward declaration
namespace sf { class RenderTarget; class Event; }

class State 
{
public:
	//State transitions
	virtual void enter() = 0;
	virtual void exit() = 0;

	// -- State functions
	virtual void handleEvent(sf::Event event) = 0;
	virtual void update(float deltaTime) = 0;
	virtual void draw(sf::RenderTexture& buffer) = 0;

	virtual ~State() {};
};