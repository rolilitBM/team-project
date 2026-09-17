#include <iostream>
#include "malischew.h"
using namespace std;

int main()
{
double a, b, c, h;

    setlocale(LC_ALL, "ru_RU.UTF-8");

    int choice;

    do
    {
        cout << "3. Площадь\n";
	cout << "4. Периметр\n";
        cout << "0. Выход.\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice)
        {
        // Место вставки: меню калькулятор геомтерической прогрессии
        case 3:
                do {
                cout << "Введите сторону a и высоту h (в сантиметрах): ";
                cin >> a >> h;
		cout << "\n=== Площадь треугольника со стороной a и высотой h ===\n";
                } while(a <= 0 || h <=0);
                cout << "Площадь = " << triangleArea(a, h) << " См\n";
                break;
	case 4:
                do{
		cout << "Введите стороны a,b,c (в сантиметрах): ";
		cin >> a >> b >> c;
		cout << "\n=== Периметр треугольника со сторонами a,b,c ===\n";
                } while(a <= 0 || b <= 0 || c <= 0);
		cout << "Периметр = " << trianglePerimeter(a,b,c) << " См\n";
		break;
        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
