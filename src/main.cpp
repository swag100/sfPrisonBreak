#include "constants.h"
#include "game.h"

int main()
{
    Game game(
        constants::BUFFER_WIDTH,
        constants::BUFFER_HEIGHT,
        constants::TITLE,
        constants::ZOOM
    );
    game.run();

    return 0;
}