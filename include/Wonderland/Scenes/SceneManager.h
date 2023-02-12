#pragma once

#include "Wonderland/Scenes/Scene.hpp"

class SceneManager {
public:
    SceneManager() = default;
    virtual ~SceneManager() = default;
    virtual void addScene(Scene *scene) = 0;
    virtual void deleteCurrentScene() = 0;
};
