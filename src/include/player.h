#pragma once

class Player 
{
public:
	int x {};
	int y {};

	sf::CircleShape shape;

	//Constructor for some reason doesn't need a type?
	Player(int x, int y);
	
	//Needs to know that these functions exist to be overwritten in player.cpp
	void update(sf::Time& deltaTime);
	void draw(sf::RenderWindow& window);
};