#include "Wonderland/Scenes/StackSceneManager.h"

void StackSceneManager::addScene(Scene *scene) {
    _stackOfScenes.push(scene);
}

void StackSceneManager::deleteCurrentScene() {
    delete _stackOfScenes.top();
    _stackOfScenes.pop();
}

void StackSceneManager::update(float &dt) {
    _stackOfScenes.top()->update(dt);
}

Scene* StackSceneManager::getCurrentScene() const {
    return _stackOfScenes.top();
}
