#include <SFML/Graphics.hpp>
#include "include/player.h"

#include <iostream>

Player::Player(int x, int y)
{
	this->position = sf::Vector2f(x, y);
	this->moveVector = sf::Vector2f(0, 0);

	this->shape.setRadius(100.f);
	this->shape.setFillColor(sf::Color::Green);

	std::cout << "Player has been made at " << this->position.x << " " << this->position.y << '\n';
};

void Player::handleEvent(sf::Event& event)
{
	/*
	if (event.type == sf::Event::KeyPressed)
	{
		std::cout << event.key.code << std::endl;
	} */
}

void Player::update(sf::Time& deltaTime)
{
	//
	this->moveVector.x = (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) - sf::Keyboard::isKeyPressed(sf::Keyboard::Left));
	this->moveVector.y = (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) - sf::Keyboard::isKeyPressed(sf::Keyboard::Up));

	//apply move vector to position
	this->position.x += this->moveVector.x * deltaTime;
	this->position.y += this->moveVector.y * deltaTime;

	//make changes visible to the user
	this->shape.setPosition(sf::Vector2f(this->position.x, this->position.y));

	//std::cout << "Player has been updated" << '\n';
}

void Player::draw(sf::RenderWindow& window)
{
	window.draw(this->shape);
}