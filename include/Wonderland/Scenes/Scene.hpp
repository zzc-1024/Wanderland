#pragma once

#include <SFML/Graphics.hpp>

class Scene :
    sf::Drawable,
    sf::Transformable {
public:
    Scene() = default;
    virtual ~Scene() = default;

    virtual void update(float &dt) = 0;
private:

};
