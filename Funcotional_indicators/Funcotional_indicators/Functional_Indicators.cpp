#include "Functional_Indicators.h"

int main()
{
    srand(unsigned(time(0)));
    int n = rand() % 10 + 10;
    int summa = 0;
    int znak;
    int* massive = new int[n];
    for (int i = 0; i < n; i++)
    {
        znak = rand() % 10;
        if (znak > 5) { massive[i] = rand() % 20; cout << i <<") " << massive[i] << endl; }
        else { massive[i] = -1 * rand() % 20; cout << i << ") " << massive[i] << endl;}
        
    }
    for (int i = 0; i < n; i++)
    {
        summa += massive[i];
    }
    //summa = massive[0];
    void (*uka)(int*, int);
    function(summa, massive)(massive, n);
    delete[] massive;
    return 0;
}






























//int main()
//{
//	int language = -1, gender = -1, sluchai = -1;
//	setlocale(LC_ALL, "RUS");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	system("chcp 1251 >> null");
//	cout << "Выберите язык / Choose language\n1. Русский\n2. English\n";
//	cin >> language;
//	while (language < 0 || language > 2)
//	{
//		cout << "Неверное значение. Введите 1 или 2. Если хотите завершить программу введите 0\nInvalid value. Insert 1 or 2. If you want to close the programm, insert 0\n";
//		cin >> language;
//	}
//	switch (language)
//	{
//	case 0:
//		cout << "Программа завершена / Programm is over";
//		break;
//	case 1:
//		cout << "Какое имя вы хотите получить:\n1. Мужское или 2. Женское\n";
//		cin >> gender >> sluchai;
//		break;
//	case 2:
//		cout << "Which name do you want to get:\n1. Male or 2. Female\n";
//		cin >> gender >> sluchai;
//		string s;
//		ifstream f;
//		f.open("Мужскимена.txt");
//		getline(f, s);
//		cout << s;
//	}
//}
