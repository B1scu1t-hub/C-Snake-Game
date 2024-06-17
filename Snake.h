//
// Created by njgdn on 6/4/2024.
//

#ifndef SNAKEGAME_SNAKE_H
#define SNAKEGAME_SNAKE_H

#include <SFML/Graphics.hpp>
#include <vector>


class Snake {

public:
    Snake();
    void move();
    void setDirection(sf::Vector2f dir);
    void draw(sf::RenderWindow& window);
    void handleInput();


private:
    std::vector<sf::RectangleShape> snakeBody;
    sf::Vector2f direction = {20, 0};
    const float size = 20.0f;
};


#endif //SNAKEGAME_SNAKE_H
