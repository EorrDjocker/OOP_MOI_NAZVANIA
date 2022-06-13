#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(unsigned(time(0)));
	int i, n, vibor, saver;
	
	bool saver_flague = 0;
	suda:
	cout << "Введите размер массива: ";
	cin >> n;
	int* A = new int[n];
	int *invert = A;
	cout << "Начальный массив:\n";
	for (invert = A, i = 0; invert < A + n; invert++, i++)
	{
		*invert = rand() % 20;
		cout << i << ". " << *invert << endl;
	}
	tuda:
	cout << "\nПеределанный массив:\n\n";
	if (!(n % 2))
	{
		for (invert = (A+1), i = 1; invert < A + n; invert+=2, i+=2)
		{
			vibor = *(invert-1);
			*(invert-1) = *invert;
			*invert = vibor;
			cout << i - 1 << ". " << *(invert-1) << endl << i << ". " << *invert << endl << endl;
		}
	}
	else
	{	
		
		if (!saver_flague)
		{ 
			invert = A;
			saver = *(invert + n - 1);
			*(invert + n - 1) = *invert;
			cout << saver << endl;
		}
		else
		{
			*(invert - 1) = saver;
		}
		for (invert = (A+1), i = 1; invert < A + n; invert+=2, i+=2)
		{
			vibor = *(invert-1);
			*(invert - 1) = *invert;
			*invert = vibor;
			cout << i - 1 << ". " << *(invert - 1) << endl << i << ". " << *invert << endl << endl;
		}
		cout << n-1 << ". " << *(invert - 1) << endl;
		saver_flague = !saver_flague;
	}
	cout << "\nЖелаете продолжить?\n0. Нет (выход из программы)\n1. Создать и инвертировать новый массив\n2. Повторно инвертировать текущий массив\n";
	cin >> vibor;
	switch (vibor)
	{
	case 0:
		break;
	case 1:
		goto suda;
		break;
	case 2:
		goto tuda;
	}
	cout << "\nПрограмма завершена\n";
}