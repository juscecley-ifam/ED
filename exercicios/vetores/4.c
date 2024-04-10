#include <stdio.h>

void main()
{
    int somaTemp = 0, media = 0;
    int temperaturas[7], qtdDiasAcimaMedia = 0, maiorTemp = -1, menorTemp = 9999999;
    char dias[7][10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

    printf("Digite a temperatura pra cada dia da semana\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s: ", dias[i]);
        scanf("%d", &temperaturas[i]);
        somaTemp += temperaturas[i];
    }

    media = somaTemp / 7;

    for (int i = 0; i < 7; i++)
    {
        if (temperaturas[i] > media)
        {
            qtdDiasAcimaMedia++;
        }

        if (temperaturas[i] > maiorTemp)
        {
            maiorTemp = temperaturas[i];
        }

        if (temperaturas[i] < menorTemp)
        {
            menorTemp = temperaturas[i];
        }
    }

    printf("Media de temperatura: %d \n", media);
    printf("Quantidade de dias acima da media: %d \n", qtdDiasAcimaMedia);
    printf("Maior temperatura: %d \n", maiorTemp);
    printf("Menor temperatura: %d \n", menorTemp);
}