#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarioReajustado;
    int cargo, anoAdmissao, tempoServico, anoCorrente;

    anoCorrente = atoi(__DATE__ + 7);

    printf("\n Informe o cargo do funcionario:");
    printf("\n 1 - Gerente");
    printf("\n 2 - Engenheiro");
    printf("\n 3 - Tecnico");
    printf("\n 4 - Outros");
    printf("\n Cargo: ");
    scanf("%d", &cargo);

    printf("\n Informe o ano de admissao do funcionario: ");
    scanf("%d", &anoAdmissao);

    printf("\n Informe o salario do funcionario: ");
    scanf("%f", &salario);

    tempoServico = anoCorrente - anoAdmissao;

    switch (cargo)
    {
    case 1:
        if (tempoServico >= 5)
        {
            salarioReajustado = salario * 1.10;
        }
        if (tempoServico >= 3 && tempoServico < 5)
        {
            salarioReajustado = salario * 1.09;
        }
        if (tempoServico < 3)
        {
            salarioReajustado = salario * 1.08;
        }
        printf("\n Tempo Servico %d", tempoServico);
        printf("\n Salario ajustado %.2f", salarioReajustado);
        break;
    case 2:
        if (tempoServico >= 5)
        {
            salarioReajustado = salario * 1.11;
        }
        if (tempoServico >= 3 && tempoServico < 5)
        {
            salarioReajustado = salario * 1.10;
        }
        if (tempoServico < 3)
        {
            salarioReajustado = salario * 1.09;
        }
        printf("\n Tempo Servico %d", tempoServico);
        printf("\n Salario ajustado %.2f", salarioReajustado);
        break;
    case 3:
        if (tempoServico >= 5)
        {
            salarioReajustado = salario * 1.12;
        }
        if (tempoServico >= 3 && tempoServico < 5)
        {
            salarioReajustado = salario * 1.11;
        }
        if (tempoServico < 3)
        {
            salarioReajustado = salario * 1.10;
        }
        printf("\n Tempo Servico %d", tempoServico);
        printf("\n Salario ajustado %.2f", salarioReajustado);
        break;
    case 4:
        salarioReajustado = salario * 1.07;
        printf("\n Tempo Servico %d", tempoServico);
        printf("\n Salario ajustado %.2f", salarioReajustado);
        break;
    default:
        printf("\n Cargo Invalido");
        break;
    }

    return 0;
}