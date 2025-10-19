# include <stdio.h>

int main() {
    int linhas = 10;
    int cols = 10;
    int tabela[10][10] = {};

    // criando as colunas:
    printf("   ");
    for(int i = 0; i < cols; i++) {
        printf(" %c", 'A' + i);
    }
    printf("\n");

    //Criando agora as linhas:
    for(int j = 0; j < linhas; j++) {
        printf("%2d ", 1 + j);
        for(int i = 0; i < cols; i++) {
            printf("%2d", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}