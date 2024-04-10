#include <stdio.h>

void main()
{
    int n, soma = 0;

    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < n; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    int j = n;
    for (int i = 0; i < n; i++)
    {
        j--;
        soma += A[i] - B[j];
    }

    printf("Resultado: %d \n", soma);
}