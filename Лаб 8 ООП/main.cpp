#include <iostream>
#include <windows.h>
#include "Triad.h"
#include "Vector3D.h"

// Функція, що отримує та повертає об'єкти базового класу 
Triad processAndReturnTriad(const Triad& t) {
    std::cout << " Отримано об'єкт: ";
    t.print();
    std::cout << "\n Додавання числа 10 до елементів...\n";

    // Повертає новий об'єкт базового класу
    return t + 10.0;
}

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "=== Лабораторна робота № 7 варіант 19 ===\n\n";

    // 1. Тестування класу Triad
    std::cout << "1. Тестування класу Triad:\n";
    Triad t1(1.0, 2.0, 3.0);
    Triad t2(1.0, 2.0, 3.0);
    Triad t3(4.0, 5.0, 6.0);

    std::cout << "   t1 = "; t1.print(); std::cout << "\n";
    std::cout << "   t1 + 5.0 = "; (t1 + 5.0).print(); std::cout << "\n";
    std::cout << "   t1 * 2.0 = "; (t1 * 2.0).print(); std::cout << "\n";
    std::cout << "   Чи рівні t1 та t2? " << (t1 == t2 ? "Так" : "Ні") << "\n\n";

    // 2. Тестування класу vector3D
    std::cout << "2. Тестування класу vector3D:\n";
    vector3D v1(1.0, 2.0, 3.0);
    vector3D v2(4.0, 5.0, 6.0);

    std::cout << "   v1 = "; v1.print(); std::cout << "\n";
    std::cout << "   v2 = "; v2.print(); std::cout << "\n";
    std::cout << "   v1 + v2 = "; (v1 + v2).print(); std::cout << "\n";
    std::cout << "   Скалярний добуток v1 та v2 = " << v1.dotProduct(v2) << "\n\n";

    // 3. Демонстрація принципу підстановки
    std::cout << "3. Демонстрація принципу підстановки:\n";
    vector3D myVector(2.0, 4.0, 6.0);
    std::cout << "   Вихідний об'єкт похідного класу: "; myVector.print(); std::cout << "\n";

    // Передаємо об'єкт похідного класу туди, де очікується базовий Triad
    Triad resultTriad = processAndReturnTriad(myVector);

    std::cout << "   Результат з функції: ";
    resultTriad.print();
    std::cout << "\n\n";

    std::cout << "Роботу завершено\n";
    return 0;
}