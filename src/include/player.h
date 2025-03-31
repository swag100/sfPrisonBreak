#pragma once

class Player 
{
public:
	int x{ 28 };
	int y{ 28 };

	//Constructor for some reason doesn't need a type?
	Player();
	
	//Needs to know that these functions exist to be overwritten in player.cpp
	void update();
	void draw();
};