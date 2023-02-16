#pragma once

#include <SFML/Graphics.hpp>

class Scene : 
    public sf::Drawable,
    public sf::Transformable {
public:
    Scene() = default;
    virtual ~Scene() = default;

    virtual void update(float &dt) = 0;    
};
