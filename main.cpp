#include <iostream>
#include "rotsebozhinsky.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int choice;
    double b1, q;
    int n;

    do
    {
        cout << "\n=== Командный проект: сборник расчётов ===\n";
        cout << "1. n-ый член геометрической прогрессии.\n";
        cout << "2. Сумма n членов геометрической прогрессии.\n";
        cout << "0. Выход.";
        cout << "\nВыберите пункт: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Введите первый член прогрессии b1, знаменатель q и номер элемента n: ";
            cin >> b1 >> q >> n;
            cout << "n-ый член геометрической прогрессии = " << nthTermG(b1, q, n) << "\n";
            break;

        case 2:
            cout << "Введите первый член прогрессии b1, знаменатель q и номер элемента n: ";
            cin >> b1 >> q >> n;
            cout << "Сумма n членов геометрической прогрессии = " << sumG(b1, q, n) << "\n";
            break;
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