#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int inicial, final, qtdPares, qtdImpares, qtdImparesDivisiveis,
        somaPares, somaImpares, somaImparesDivisiveis;

    float mediaPares, mediaImpares, mediaImparesDivisiveis;
    bool continuar;

    qtdPares = 0;
    qtdImpares = 0;
    qtdImparesDivisiveis = 0;
    somaPares = 0;
    somaImpares = 0;
    somaImparesDivisiveis = 0;

    do
    {
        printf("\n Informe o numero inicial: ");
        scanf("%d", &inicial);

        printf("\n Informe o numero final: ");
        scanf("%d", &final);

        continuar = false;
        if (inicial > final)
        {
            printf("\n Valores invalidos!! Numero inicial deve ser maior que o numero final \n");
            continuar = true;
        }

    } while (continuar);

    for (int i = inicial; i <= final; i++)
    {
        if (i % 2 == 0)
        {
            qtdPares++;
            somaPares += i;
        }
        else
        {
            qtdImpares++;
            somaImpares += i;

            if (i % 3 == 0 && i % 7 == 0)
            {
                qtdImparesDivisiveis++;
                somaImparesDivisiveis += i;
            }
        }
    }

    mediaPares = (qtdPares > 0) ? (somaPares / qtdPares) : 0;
    mediaImpares = (qtdImpares > 0) ? (somaImpares / qtdImpares) : 0;
    mediaImparesDivisiveis = (qtdImparesDivisiveis > 0) ? (somaImparesDivisiveis / qtdImparesDivisiveis) : 0;

    printf("\n Quantidade numeros pares: %d", qtdPares);
    printf("\n Quantidade numeros impares: %d", qtdImpares);
    printf("\n Quantidade numeros impares divisiveis: %d", qtdImparesDivisiveis);
    printf("\n Media de numeros pares: %.2f", mediaPares);
    printf("\n Media de numeros impares: %.2f", mediaImpares);
    printf("\n Media de numeros impares divisiveis: %.2f", mediaImparesDivisiveis);

    return 0;
}