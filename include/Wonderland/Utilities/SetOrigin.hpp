#pragma once

#include <SFML/Graphics.hpp>

namespace Utilities {

template <typename T>
void setCenter(T &t) {
    static_assert(std::is_same<sf::Transformable, T>, 
        "The type must be the derived class of sf::Transformable, not sf::Transformable itself.");
    static_assert(!std::is_base_of<sf::Transformable, T>,
        "The type must be the derived class of sf::Transformable.")
    sf::FloatRect lb = t.getLocalBounds();
    t.setOrigin(lb.left + lb.width / 2, lb.top + lb.height / 2);
}

template <typename T>
void (*setCentre)(T &t) = setCenter;

template <typename T>
void setLeftTop(T &t) {
    static_assert(std::is_same<sf::Transformable, T>, 
        "The type must be the derived class of sf::Transformable, not sf::Transformable itself.");
    static_assert(!std::is_base_of<sf::Transformable, T>,
        "The type must be the derived class of sf::Transformable.")
    sf::FloatRect lb = t.getLocalBounds();
    t.setOrigin(lb.left, lb.top);
}

}
