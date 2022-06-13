#include "Complex.h"


void sort(int arr[], int N)
{
    int c = 0, i = 0, j = 1, k = N;

    for (int j = 0; j < N; )
    {
        for (int i = (j + 1);;)
        {
            if (i == N)
            {
                j++;
                break;
            }

            if (arr[j] > arr[i])
            {
                c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;

                break;
            }

            if (arr[j] <= arr[i])
            {
                i++;
            }
        }
    }

    for (int z = 0; z < N; z++)
    {
        cout << arr[z] << " ";
    }

    cout << "\n";
}

void sort(Complex arr[], int N)
{
    int i = 0, j = 1, k = N;

    Complex c;

    for (int j = 0; j < N; )
    {
        for (int i = (j + 1);;)
        {
            if (i == N)
            {
                j++;
                break;
            }

            if (arr[j] > arr[i])
            {
                c = arr[j];
                arr[j] = arr[i];
                arr[i] = c;

                break;
            }

            else
            {
                i++;
            }
        }
    }

    for (int z = 0; z < N; z++)
    {
        arr[z].printc();
        cout << "\n";
    }
}