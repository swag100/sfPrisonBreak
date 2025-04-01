#include "game.h"

//temp -- move this stuff into a state class soon
#include "player.h"
#include <vector>

Game::Game(sf::RenderWindow& newWindow) : window(newWindow) {}

void Game::start()
{
    this->players.push_back(
        Player(29, 200)
    );
}

void Game::handleEvents() 
{

    //Event handling
    sf::Event event;
    while (this->window.pollEvent(event))
    {
        //temp
        for (Player aPlayer : this->players) 
            aPlayer.handleEvent(event);

        if (event.type == sf::Event::Closed) 
            this->window.close();
    }

}

void Game::update()
{
    float dt = deltaClock.restart().asSeconds();

    //Update
    for (Player aPlayer : this->players) 
        aPlayer.update(dt);

}

void Game::draw()
{

    //Begin drawing process
    this->window.clear();

    //draw
    for (Player aPlayer : this->players) 
        aPlayer.draw(this->window);

    // pygame display flip, i think this flips the buffer!
    this->window.display();

}

void Game::run()
{
    this->start();
    while (this->window.isOpen())
    {
        this->handleEvents();
        this->update();
        this->draw();
    }
}