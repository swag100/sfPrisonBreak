#include "game.h"

//temp -- move this stuff into a state class soon
#include "player.h"
#include <vector>

Game::Game(sf::RenderWindow& newWindow) : window(newWindow) 
{
    /*players.push_back(
        Player(29, 200)
    );*/
}

void Game::handleEvents() 
{

    //Event handling
    sf::Event event;
    while (window.pollEvent(event))
    {
        //temp
        //for (Player player : players)
            player.handleEvent(event);

        if (event.type == sf::Event::Closed) 
            window.close();
    }

}

void Game::update()
{
    float deltaTime = deltaClock.restart().asSeconds();

    //Update
    //for (Player player : players)
        player.update(deltaTime);

}

void Game::draw()
{

    //Begin drawing process
    window.clear();

    //draw
    //for (Player player : players) 
        player.draw(window);

    // pygame display flip, i think this flips the buffer!
    window.display();

}

void Game::run()
{
    while (window.isOpen())
    {
        handleEvents();
        update();
        draw();
    }
}