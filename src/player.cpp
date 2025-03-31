#include <SFML/Graphics.hpp>
#include "include/player.h"

#include <iostream>

Player::Player(int x, int y)
{
	this->shape.setRadius(100.f);
	this->shape.setFillColor(sf::Color::Green);
	this->x = x;
	this->y = y;
	std::cout << "Player has been made at " << this->x << " " << this->y << '\n';
};

void Player::update(sf::Time& deltaTime)
{
	std::cout << "Player has been updated" << '\n';
}

void Player::draw(sf::RenderWindow& window)
{
	std::cout << "Player has been drawn" << '\n';
}