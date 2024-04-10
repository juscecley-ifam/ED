#include <stdio.h>

void main()
{
    int n, m, posicao = -1;

    printf("Informe o tamanho do vetor A: ");
    scanf("%d", &n);

    int A[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite um numero: ");
    scanf("%d", &m);

     for (int i = 0; i < n; i++)
    {
        if (A[i] == m){
            posicao = i;
        }
    }

    if (posicao != -1){
         printf("O numero foi encontrado na posicao %d \n", posicao);
    } else {
        printf("Valor não está no vetor");
    }
}