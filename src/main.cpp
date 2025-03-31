#include <SFML/Graphics.hpp>
#include "include/player.h"

// #include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(480, 360), "SFML works!", sf::Style::Close);

    sf::Clock deltaClock;

    Player myGuy(200, 200);

    while (window.isOpen())
    {
        sf::Time dt = deltaClock.restart();

        //Event handling
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //Update
        myGuy.update(dt);

        window.clear();

        //Draw
    
        myGuy.draw(window);


        window.display();

    }

    return 0;
}