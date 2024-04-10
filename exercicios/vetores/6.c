#include <stdio.h>

void main()
{
    int n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
   

    int j = n;
    for (int i = 0; i < n; i++)
    {
        j--;
        B[i] = A[j];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%4d ", B[i]);
    }
}