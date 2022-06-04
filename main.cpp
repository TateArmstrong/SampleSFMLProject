#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Conway's Game of Life");
    window.setKeyRepeatEnabled(false);
    window.setFramerateLimit(144);

    sf::RectangleShape cell(sf::Vector2f(50, 50));
    cell.setFillColor(sf::Color::Green);
    cell.setPosition(window.getSize().x / 2 - 25, window.getSize().y / 2 - 25);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            switch(event.type){
                case sf::Event::Closed:
                    window.close(); break;
            }
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

            // draw everything here...
            window.draw(cell);

        // end the current frame
        window.display();
    }

    return 0;
}