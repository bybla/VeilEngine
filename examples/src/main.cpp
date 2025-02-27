#include "../include/Veil.hpp"
#include <iostream>

class MyGame : public Veil
{
public:
    void Init() override {
        std::cout << "Инициализация игры!" << std::endl;
    }

    void Update() override {
        std::cout << "Обновление логики..." << std::endl;
    }

    void Render() override {
        std::cout << "Рисуем сцену!" << std::endl;
    }

    void Shutdown() override {
        std::cout << "Выход из игры!" << std::endl;
    }
};

int main() {
    MyGame game;
    game.Init();

    for (int i = 0; i < 3; i++) {
        game.Update();
        game.Render();
    }

    game.Shutdown();
    return 0;
}

