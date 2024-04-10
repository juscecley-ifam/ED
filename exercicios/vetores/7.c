#include <stdio.h>

int main() {
    int n, m;

    // Solicita o tamanho dos vetores
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &m);

    // Declaração dos vetores
    int vetorA[n], vetorB[m], vetorC[n + m];

    // Preenche os vetores
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < m; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    // Intercala os vetores
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        vetorC[k++] = vetorA[i++];
        vetorC[k++] = vetorB[j++];
    }

    // Copia os elementos restantes (se houver)
    while (i < n) {
        vetorC[k++] = vetorA[i++];
    }
    while (j < m) {
        vetorC[k++] = vetorB[j++];
    }

    // Exibe o vetor resultante
    printf("Vetor resultante:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", vetorC[i]);
    }
    
    printf("\n");

    return 0;
}