#include <stdio.h>
#include <ctype.h>

int main()
{
    float peso, altura, pesoIdeal;
    char sexo;

    printf("\n Informe o sexo do paciente: ");
    printf("\n M - Masculino");
    printf("\n F - Feminino");
    printf("\n Sexo: ");
    scanf("%s", &sexo);

    printf("\n Informe a altura do paciente (cm): ");
    scanf("%f", &altura);

    printf("\n Informe o peso do paciente (kg): ");
    scanf("%f", &peso);

    sexo = toupper(sexo);

    switch (sexo)
    {
    case 'M':
        pesoIdeal = (72.6 * altura) - 58;
        break;
    case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        break;
    default:
        printf("\n Sexo Invalido");
        break;
    }

    printf("\n Peso ideal %.2f", pesoIdeal);

    if (peso > pesoIdeal)
    {
        printf("\n Paciente está acima do peso ideal");
    }
    else
    {
        printf("\n Paciente não está acima do peso ideal");
    }

    return 0;
}