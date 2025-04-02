#include "game.h"

Game::Game()
{
	//Set up window and buffer
    window.setView(view);

    //
    buffer.create(bufferSize.x, bufferSize.y);
	bufferSprite.setTexture(buffer.getTexture());
}

void Game::handleEvents() 
{
    //Event handling
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
        default:
            //state does this later
            player.handleEvent(event);
        }
    }
}

void Game::update()
{
    float deltaTime = deltaClock.restart().asSeconds();

	//state does this later
    player.update(deltaTime);
}

void Game::draw()
{
    //Begin drawing render texture
    buffer.clear();

    //Let the state draw to the buffer later
    player.draw(buffer);

    //
    buffer.display();
    window.draw(bufferSprite);
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