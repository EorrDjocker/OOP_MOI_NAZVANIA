#include "Functional_Indicators.h"

void invert(int* massive, int n)
{
    int* obratniy = new int[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
       obratniy[j] = massive[i];
       j += 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << obratniy[i];
        if (i != n - 1) cout << ", ";
        else cout << ".\n";
    }
    delete[]obratniy;
}

void neubivka(int* massive, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (massive[i] <= massive[j])
            {
                int c = 0;
                c = massive[i];
                massive[i] = massive[j];
                massive[j] = c;
                c = 0;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        cout << massive[i] << ", ";
    }
    cout << massive[0] << ".\n";
}

void nevozrost(int* massive, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (massive[i] >= massive[j])
            {
                int c = 0;
                c = massive[i];
                massive[i] = massive[j];
                massive[j] = c;
                c = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << massive[i];
        if (i != n - 1) cout << ", ";
        else cout << ".\n";
    }
}

void (*function(int summa, int* massive))(int* massive, int n)
{
    if (summa < massive[0])
    {
         return nevozrost;
    }
    else if (summa == massive[0])
    {
        return invert;
    }
    else if (summa > massive[0])
    {
       return neubivka;
    }
}















//string maname()
//{
//
//	cout << "George";
//	return "2";
//}
//
//string womaname()
//{
//	cout << "Georgina";
//	return "2";
//}
//
//string randomname_eng(int k)
//{
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		cout << "RANDOM GOGOGO";
//	}
//	return "2";
//}
//
//string randomname_ru(int k)
//{
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		cout << "RANDOM GOGOGO";
//	}
//	return "2";
//}