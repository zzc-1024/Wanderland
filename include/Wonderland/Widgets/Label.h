/*
 * @author: zzc-1024 1977309465@qq.com
 * @Date: 2023-02-13 15:52:19
 * @LastEditors: zzc-1024 1977309465@qq.com
 * @LastEditTime: 2023-02-15 21:26:45
 * @FilePath: \Wonderland\include\Wonderland\Widgets\Label.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

#include <iostream>

#include "Wonderland/Widgets/Widget.hpp"
#include "Wonderland/Utilities/SetOrigin.hpp"

class Label : 
    public Widget {
public:
    Label();
    Label(sf::String string);
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

    sf::Text _text;
    sf::RectangleShape _rectangleShape;
};
