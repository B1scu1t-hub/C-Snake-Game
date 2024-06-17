//
// Created by njgdn on 6/4/2024.
//

#include "Snake.h"
#include <SFML/Graphics.hpp>
#include <vector>

Snake::Snake()
{
    snakeBody.push_back(sf::RectangleShape(sf::Vector2f(size, size)));
    snakeBody[0].setFillColor(sf::Color::Green);
    snakeBody[0].setPosition(400, 300);
}

void Snake::move() {
    for (size_t i = snakeBody.size() - 1; i > 0; --i)
    {
        snakeBody[i].setPosition(snakeBody[i - 1].getPosition());
    }
    snakeBody[0].move(direction);
}

void Snake::draw(sf::RenderWindow &window)
{
    for (auto& segment : snakeBody)
    {
        window.draw(segment);
    }
}

void Snake::setDirection(sf::Vector2f dir)
{
    direction = dir;
}

void Snake::handleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        Snake::setDirection({0, -20});
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        Snake::setDirection({0, 20});
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        Snake::setDirection({-20, 0});
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        Snake::setDirection({20, 0});
    }
}
