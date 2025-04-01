#include <SFML/Graphics.hpp>
#include "player.h"

#include <iostream>

Player::Player(int x, int y)
{
	position = sf::Vector2f(x, y);
	moveVector = sf::Vector2f(0, 0);

	shape.setRadius(20.f);
	shape.setFillColor(sf::Color::Green);

	std::cout << "Player has been made at " << position.x << " " << position.y << '\n';
};

void Player::handleEvent(sf::Event& event)
{
	/*
	if (event.type == sf::Event::KeyPressed)
	{
		std::cout << event.key.code << std::endl;
	} */
}

void Player::update(float deltaTime)
{
	//
	moveVector.x =	sf::Keyboard::isKeyPressed(sf::Keyboard::Right) - 
					sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
	moveVector.y =	sf::Keyboard::isKeyPressed(sf::Keyboard::Down) - 
					sf::Keyboard::isKeyPressed(sf::Keyboard::Up);

	//apply move vector to position
	position.x += moveVector.x * 200 * deltaTime;
	position.y += moveVector.y * 200 * deltaTime;

	//make changes visible to the user
	// for some reason, shape is NOT changing position -- This function is being called though
	shape.setPosition(position.x , position.y);

	// std::cout << "Player has been updated" << '\n

	std::cout << position.x << " " << position.y << '\r';
	//std::cout << deltaTime << '\n';
}

void Player::draw(sf::RenderWindow& window)
{
	window.draw(shape);
}