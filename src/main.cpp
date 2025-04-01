#include <SFML/Graphics.hpp>
#include "player.h"
#include "game.h"

// #include <iostream>

// https://en.sfml-dev.org/forums/index.php?topic=17069.0

int main()
{
    sf::RenderWindow window(sf::VideoMode(320, 240), "SFML works!", sf::Style::Close);

    sf::Clock deltaClock;

    Player myGuy(200, 200);

    while (window.isOpen())
    {
        float dt = deltaClock.restart().asSeconds();

        //Event handling
        sf::Event event;
        while (window.pollEvent(event))
        {
            myGuy.handleEvent(event);

            if (event.type == sf::Event::Closed)
                window.close();
        }

        //Update
        myGuy.update(dt);


        //Begin drawing process
        window.clear();

        //Draw
    
        myGuy.draw(window);

        //
        window.display();

    }

    return 0;
}