#include "game.h"

// https://en.sfml-dev.org/forums/index.php?topic=17069.0

int main()
{
    //Create window because game requires one
    sf::RenderWindow window(sf::VideoMode(320, 240), "SFML works!", sf::Style::Close);

    //Create and run our game instance
    Game game(window);
    game.run();

    return 0;
}