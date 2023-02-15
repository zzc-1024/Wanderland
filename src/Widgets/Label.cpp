#include "Wonderland/Widgets/Label.h"

Label::Label() {
    Utilities::setCenter(_text);
}

Label::Label(sf::String string) : 
    Label() {
    _text.setString(string);
    _rectangleShape.setSize({_text.getGlobalBounds().width, _text.getGlobalBounds().height});
}

void Label::setText(sf::String string) {
    _text.setString(string);
    _rectangleShape.setSize({_text.getGlobalBounds().width, _text.getGlobalBounds().height});
}

sf::String Label::getText() const {
    return _text.getString();
}

void Label::setFont(sf::Font font) {
    _text.setFont(font);
    _rectangleShape.setSize({_text.getGlobalBounds().width, _text.getGlobalBounds().height});
}

sf::Font Label::getFont() const {
    return _text.getFont();
}

void Label::setTextColor(sf::Color color) {
    _text.setColor(color);
}

sf::Color Label::getTextColor() const {
    return _text.getColor();
}

void Label::setBackGroundColor(sf::Color color) {
    _rectangleShape.setFillColor(color);
}

sf::Color Label::getBackGroundColor() const {
    return _rectangleShape.getFillColor();
}

virtual void Label::update(float &dt) override {
    _text.setPosition(getPosition());
    _rectangleShape.setPosition(getPosition());
}

virtual void Label::draw(sf::RenderTarget& target, sf::RenderStates states) const override {
    states.transform *= getTransform();
    states.texture = nullptr;
    target.draw(_rectangleShape, states);
    target.draw(_text, states);
}
