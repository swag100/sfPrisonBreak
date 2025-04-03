#include "game.h"
#include "playstate.h"

Game::Game(int width, int height, std::string title, int initScale) : 
    window(
        sf::VideoMode(
            width* initScale, 
            height* initScale
        ), 
        title, 
        sf::Style::Close
    ),
	bufferSize(width, height),
	view(
        sf::Vector2f(bufferSize) / 2.0f, 
        sf::Vector2f(bufferSize)
    )

{
	//Set up the view
	view.setCenter(bufferSize.x / 2.f, bufferSize.y / 2.f);
	view.setSize(bufferSize.x, bufferSize.y);
	
    //Set up the window
	window.setView(view);
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);

	//Set up the buffer
	buffer.create(bufferSize.x, bufferSize.y);
	bufferSprite.setTexture(buffer.getTexture());

	//Set up the initial state
	stateMachine->pushState(new PlayState(this));
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
			//data->stateMachine->getState()->handleEvent(event);
            break;
        }
    }
}

void Game::update()
{
    float deltaTime = deltaClock.restart().asSeconds();

	//state does this later
    //data->stateMachine->getState()->update(deltaTime);
}

void Game::draw()
{
    //Begin drawing render texture
    buffer.clear();

    //Let the state draw to the buffer later
    //data->stateMachine->getState()->draw(buffer);

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