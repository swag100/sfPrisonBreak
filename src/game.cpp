#include "game.h"

Game::Game(sf::RenderWindow& newWindow) : window(newWindow)
{
    
}

void Game::start()
{

}

void Game::handleEvents() 
{

    //Event handling
    sf::Event event;
    while (this->window.pollEvent(event))
    {
        //myGuy.handleEvent(event);

        if (event.type == sf::Event::Closed)
            this->window.close();
    }

}

void Game::update()
{
    float dt = deltaClock.restart().asSeconds();

    //Update
    //myGuy.update(dt);


    //Begin drawing process
    this->window.clear();

    //Draw

    //myGuy.draw(window);

}

void Game::draw()
{

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