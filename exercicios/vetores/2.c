#include <stdio.h>

void main()
{
    int A[8] = {'*', 'A', '*', 'H', 'S', 'E', 'Y', 'U'};
    int aux;

    for (int i = 7; i >= 4; i--)
    {
        aux = A[i];
        A[i] = A[7 - i];
        A[7 - i] = aux;
    }

    aux = A[0];
    A[0] = A[5];
    A[5] = aux;

    for (int i = 0; i < 8; i++)
    {
        printf("%c ", A[i]);
    }
}