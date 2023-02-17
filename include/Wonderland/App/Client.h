/**
 * @file client.h
 * @brief 客户端的定义
 * @author zzc-1024 (1977309465@qq.com)
 * @date 2023-02-16
 */
#pragma once

#include <list>

#include <SFML/Graphics.hpp>

#include "Wonderland/App/Application.hpp"


class client final : public Application {
public:
    client() = default;
    ~client() = default;
    void handle(sf::Event event);
    virtual void update(float &dt) override;

private:
    sf::Font _font;
    sf::RenderWindow* _window;
};