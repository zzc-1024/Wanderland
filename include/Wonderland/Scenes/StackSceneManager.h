#pragma once

#include <stack>

#include "Wonderland/Scenes/SceneManager.h"

class StackSceneManager :
    public SceneManager {
public:
    StackSceneManager() = default;
    virtual ~StackSceneManager() = default;
    virtual void addScene(Scene* scene) override;
    virtual void deleteCurrentScene() override;
    virtual void update(float &dt) override;
    virtual Scene* getCurrentScene() const override;

private:
    std::stack<Scene*> _stackOfScenes;
};
