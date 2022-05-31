#include "Complex.h"


int main()
{
	setlocale(LC_ALL, "ru");
	ifstream f("ComplexMassive.txt");
	//f.open("ComplexMassive.txt");
	if (!f)
	{
		cout << "Ошибка! Мои сенсоры не видят файл ComplexMassive.txt! Самоуничтожение через 3... 2... 1...";
	}
	else
	{

		string s, l;
		int k, j;
		s = ""; l = "";
		getline(f, s);
		Complex* CM = new Complex[stoi(s)];
		for (k = 0; k < stoi(s); k++)
		{
			getline(f, l);
			l += '\n';
			CM[k] = toComplex(l);
			l = "";
		}
		cout << "Массив: \n";
		for (k = 0; k < stoi(s); k++)
		{
			CM[k].printc();
			cout << endl;
		}
		cout << endl << "Число с наибольшим модулем: ";
		j = 0;
		for (k = 1; k < stoi(s); k++)
		{
			if (mod(CM[j]) < mod(CM[k]))
			{
				j = k;
			}
		}
		CM[j].printc();
	}
	/*cout << "Вы вошли в программу для проведения арифмитеческих операций над комплесными числами.\nПожалуйста, выберите нужную операцию и введите соответствующую ей цифру\n";
	cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n";
	int vibor;
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		summa_c();
		break;
	case 2:
		raznost_c();
		break;
	case 3:
		proizvedenie_c();

		break;
	case 4:
		delenie_c();
	}*/

}

