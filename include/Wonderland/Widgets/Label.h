#pragma once

#include <iostream>
#include <optional>

#include "Wonderland/Widgets/Widget.hpp"
#include "Wonderland/Utilities/SetOrigin.hpp"

class Label : 
    public Widget {
public:
    Label();
    Label(sf::String string, sf::Font font);
    virtual ~Label() = default;
    void setText(sf::String string);
    sf::String getText() const;
    void setFont(sf::Font font);
    sf::Font getFont() const;
    void setTextColor(sf::Color color);
    sf::Color getTextColor() const;
    void setBackGroundColor(sf::Color color);
    sf::Color getBackGroundColor() const;
    virtual void update(float &dt) override;

private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

    sf::Font _font;
    sf::Text _text;
    sf::RectangleShape _rectangleShape;
};
