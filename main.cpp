#include <iostream>
#include <SFML/Graphics.hpp>
#include "Snake.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Game");
    Snake snake;

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                std::cout << "Closing window..." << std::endl;
                window.close();
            }
        }

        snake.handleInput();  // No parameter

        snake.move();

        window.clear();

        snake.draw(window);

        window.display();

        sf::sleep(sf::milliseconds(60));
    }
    return 0;
}

