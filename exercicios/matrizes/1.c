#include <stdio.h>

void main()
{
    int matriz[2][3],
        pares[6] = {0, 0, 0, 0, 0, 0},
        maior = -1,
        menor = 9999999,
        soma = 0,
        k = -1,
        acimaMedia = 0;

    float media;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }

            if (matriz[i][j] % 2 == 0)
            {
                k++;
                pares[k] = matriz[i][j];
            }

            soma += matriz[i][j];
        }
    }

    media = soma / 6.0;

    putchar('\n');

    for (int i = 0; i < 2; i++)
    {
        putchar('|');
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", matriz[i][j]);

            if (matriz[i][j] > media)
            {
                acimaMedia++;
            }
        }
        printf("%5s", "|");
        putchar('\n');
    }

    printf("Maior elemento %d \n", maior);
    printf("Menor elemento %d \n", menor);
    printf("Media elementos %.2f \n", media);

    printf("Elementos pares: ");
    for (int i = 0; i < 6; i++)
    {
        if (pares[i] != 0)
        {
            printf("%d,", pares[i]);
        }
    }
    putchar('\n');

    printf("Qtd Elementos acima da media %d \n", acimaMedia);
}