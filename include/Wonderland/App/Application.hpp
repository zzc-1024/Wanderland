#pragma once

class Application {
public:
    Application() = default;
    virtual ~Application() = default;
    virtual void update(float &dt) = 0;
};
