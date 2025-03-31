#include <SFML/Graphics.hpp>
#include "include/player.h"

#include <iostream>

Player::Player() {
	std::cout << "Player has been made" << '\n';
};

void Player::update()
{
	std::cout << "Player has been updated" << '\n';
}

void Player::draw()
{
	std::cout << "Player has been drawn" << '\n';
}