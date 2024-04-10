#include <stdio.h>

int main()
{
    int n, m;

    printf("Informe o tamanho do vetor A: ");
    scanf("%d", &n);

    printf("Informe o t amanho do vetor B: ");
    scanf("%d", &m);

    int A[n], B[m], C[n + m];

    printf("Informe os elementos do vetor A: \n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Informe os elementos do vetor B: \n");
    for (int i = 0; i < m; i++)
    {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    int i = 0, j = 0;

    for (int k = 0; k < n + m; k++)
    {
        if (k % 2 == 0)
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%4d ", C[i]);
    }

    return 0;
}