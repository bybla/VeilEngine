#ifndef VEIL_HPP
#define VEIL_HPP

class Veil
{
public:
    Veil() = default;
    virtual ~Veil() = default;  // Виртуальный деструктор

    virtual void Init() {}       // Инициализация движка
    virtual void Update() {}     // Обновление логики
    virtual void Render() {}     // Отрисовка сцены
    virtual void Shutdown() {}   // Очистка ресурсов
};

#endif // VEIL_HPP
