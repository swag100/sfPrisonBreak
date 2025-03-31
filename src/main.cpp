#include <SFML/Graphics.hpp>
#include "include/player.h"

#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(480, 360), "SFML works!", sf::Style::Close);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    Player myGuy;

    myGuy.draw();

    std::cout << myGuy.x << ' ' << myGuy.y;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
        myGuy.update();
    }

    return 0;
}