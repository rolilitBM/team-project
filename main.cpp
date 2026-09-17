#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int choice;

    do
    {
        cout << "0. Выход.";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice)
        {
        // Место вставки: меню калькулятор геомтерической прогрессии
        // Место вставки: меню калькулятор треугольника
        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}