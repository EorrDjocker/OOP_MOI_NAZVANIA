#include "Hector.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int vibor = 0;
	Vector a1;
	Vector a2;

	cout << "Введите 1, если хотите провести операцию над векторами.\nВведите что-то другое, если хотите выйти из программы\n\n";
	cin >> vibor;
	if (vibor == 1)
	{
		here:
		cout << "\nВведите x координату первого вектора\n";
		a2.Set_x();
		cout << "\nВведите y координату первого вектора\n";
		a2.Set_y();
		cout << "\nВведите z координату первого вектора\n";
		a2.Set_z();
		cout << "\nВведите x координату второго вектора\n";
		a1.Set_x();
		cout << "\nВведите y координату второго вектора\n";
		a1.Set_y();
		cout << "\nВведите z координату второго вектора\n";
		a1.Set_z();
	there:
		cout << "\nВыберите действие и введите соответствующее число:\n0. Выйти из программы\n1. Найти модуль вектора\n2. Найти скалярное произведение\n3. Найти векторное произведение\n4. Найти сумму векторов\n5. Найти разность векторов\n6. Умножить вектор на число\n7. Ввести новые векторы\n\n";
		cin >> vibor;
		if (vibor == 1)
		{
		suda:
			cout << "\nМодуль какого вектора найти? (1 или 2)\n";
			int k = 0;
			cin >> k;
			if (k == 1)
			{
				a2.Module(a2);
			}
			else if (k == 2)
			{
				a1.Module(a1);
			}
			else
			{
				cout << "Введено неверное значение. Пожалуйста, введите 1 или 2\n";
				goto suda;
			}
			goto there;
		}
		else if (vibor == 2)
		{
			a2.Scalar_proizv(a1, a2);
			goto there;
		}
		else if (vibor == 3)
		{
			a1.Vector_proizv(a1, a2);
			goto there;
		}
		else if (vibor == 4)
		{
			a1.Sum(a1, a2);
			goto there;
		}
		else if (vibor == 5)
		{
			a1.Raznost(a1, a2);
			goto there;
		}
		else if (vibor == 6)
		{
		tuda:
			cout << "\nВведите число\n";
			double chislo = 0;
			cin >> chislo;
			cout << "\nКакой вектор умножить на число? (1 или 2)\n";
			int k = 0;
			cin >> k;
			if (k == 1)
			{
				a2.MnojitNa(a2, chislo);
			}
			else if (k == 2)
			{
				a1.MnojitNa(a1, chislo);
			}
			else
			{
				cout << "Введено неверное значение. Пожалуйста, введите 1 или 2\n";
				goto tuda;
			}
			goto there;
		}
		else if (vibor == 7) goto here;
		else if (vibor == 0)
		{
			cout << "\nПрограмма завершена";
			return 0;
		}
		else
		{
			cout << "Введено неверное значение. Пожалуйста, введите 1, 2, 3, 4, 5, 6 или 0\n";
			goto there;
		}
		goto here;
	}
	cout << "\nПрограмма завершена";
}