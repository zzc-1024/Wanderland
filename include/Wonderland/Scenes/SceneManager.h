#pragma once

#include "Wonderland/Scenes/Scene.hpp"

class SceneManager {
public:
    SceneManager() = default;
    virtual ~SceneManager() = default;
    virtual void addScene(Scene *scene) = 0;
    virtual void deleteCurrentScene() = 0;
    virtual void update(float &dt) = 0;
    virtual Scene* getCurrentScene() const = 0;
    uint8_t getNumberOfScene() const;

private:
    uint8_t _numberOfScene = 0;
};
