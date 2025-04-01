#pragma once

class Player 
{
private:
	sf::Vector2f position;
	sf::Vector2f moveVector;
	sf::CircleShape shape;

public:
	//Constructor for some reason doesn't need a type?
	Player(int x, int y);
	
	//Needs to know that these functions exist to be overwritten in player.cpp
	void handleEvent(sf::Event& event);
	void update(float deltaTime);
	void draw(sf::RenderWindow& window);
};