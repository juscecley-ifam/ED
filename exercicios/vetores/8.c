
#include <stdio.h>

int main() {
    int N;
    
    printf("Digite o número de clientes: ");
    scanf("%d", &N);
    
    int filmes_retirados[N];
    
    printf("Digite a quantidade de filmes retirados por cada cliente:\n");
    for (int i = 0; i < N; i++) {
        printf("Cliente %d: ", i);
        scanf("%d", &filmes_retirados[i]);
    }
    
    int locacoes_gratis[N];
    
    for (int i = 0; i < N; i++) {
        locacoes_gratis[i] = filmes_retirados[i] / 10;
    }
    
    printf("Quantidade de locações grátis para cada cliente:\n");
    for (int i = 0; i < N; i++) {
        printf("Cliente %d: ", i);
        printf("%d\n", locacoes_gratis[i]);
    }
    
    return 0;
}