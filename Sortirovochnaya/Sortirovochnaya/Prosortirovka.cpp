#include "Complex.h"

int main()
{
    srand(unsigned(time(0)));
    setlocale(LC_ALL, "rus");
    int const N = 10;
    Complex A[N];
    for (int i = 0; i < N; i++)
    {
        A[i].ip = rand() % 10;
        A[i].rp = rand() % 10;
    }
    sort(A, N);
}