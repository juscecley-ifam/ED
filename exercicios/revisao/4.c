#include <stdio.h>

void main()
{
    int votoCand;
    int totalVotos = 0;
    int totalCand1 = 0;
    int totalCand2 = 0;
    int totalCand3 = 0;
    int totalCand4 = 0;
    int totalNulo = 0;
    int totalBranco = 0;
    int totalInvalidos = 0;

    float percCand1, percCand2, percCand3, percCand4, percNull, percBranco;

    do
    {
        printf("\n Informe o seu voto para os seguintes candidatos:");
        printf("\n 1 - Candidato 1");
        printf("\n 2 - Candidato 2");
        printf("\n 3 - Candidato 3");
        printf("\n 4 - Candidato 4");
        printf("\n 5 - Nulo");
        printf("\n 6 - Branco");
        printf("\n 0 - SAIR");
        printf("\n VOTO: ");
        scanf("%d", &votoCand);
        
        switch (votoCand)
        {
        case 1:
            totalCand1++;
            break;
        case 2:
            totalCand2++;
            break;
        case 3:
            totalCand3++;
            break;
        case 4:
            totalCand4++;
            break;
        case 5:
            totalNulo++;
            break;
        case 6:
            totalBranco++;
            break;
        default:
            totalInvalidos++;
            break;
        }

        if (votoCand != 0)
        {
            totalVotos++;
        }

              // getch();
        system("clear");

    } while (votoCand != 0);

    percCand1 = (totalCand1 * 100) / totalVotos;
    percCand2 = (totalCand2 * 100) / totalVotos;
    percCand3 = (totalCand3 * 100) / totalVotos;
    percCand4 = (totalCand4 * 100) / totalVotos;
    percNull = (totalNulo * 100) / totalVotos;
    percBranco = (totalBranco * 100) / totalVotos;

    printf("\n Quantidade votos Candidato 1: %d", totalCand1);
    printf("\n Percentual votos Candidato 1: %.2f", percCand1);

    printf("\n Quantidade votos Candidato 2: %d", totalCand2);
    printf("\n Percentual votos Candidato 2: %.2f", percCand2);

    printf("\n Quantidade votos Candidato 3: %d", totalCand3);
    printf("\n Percentual votos Candidato 3: %.2f", percCand3);

    printf("\n Quantidade votos Candidato 4: %d", totalCand4);
    printf("\n Percentual votos Candidato 4: %.2f", percCand4);

    printf("\n Quantidade votos Nulos: %d", totalNulo);
    printf("\n Percentual votos Nulos: %.2f", percNull);

    printf("\n Quantidade votos Brancos: %d", totalBranco);
    printf("\n Percentual votos Brancos: %.2f", percBranco);
}