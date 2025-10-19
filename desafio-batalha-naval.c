# include <stdio.h>

int main() {
    int linhas = 10;
    int cols = 10;
    int tabela[10][10] = {}; //primeiro índice = linha.

    //Terceiro Passo: inserido o navio 1 as colunas D, E e F, na linha 3. 
    for(int i = 3; i <= 5; i++) {
        tabela[2][i]=3;
    }

    //Quarto passo: inserindo o navio 2 as linhas 5, 6 e 7, na coluna H.
    for(int i = 4; i <= 6; i++) {
        tabela[i][7] = 4;
    }

    
    //Primeiro Passo: criando as colunas:
    printf("   ");
    for(int i = 0; i < cols; i++) {
        printf(" %c", 'A' + i);
    }
    printf("\n");

    //Segundo Passo: criando agora as linhas:
    for(int j = 0; j < linhas; j++) {
        printf("%2d ", 1 + j);
        for(int i = 0; i < cols; i++) {
            printf("%2d", tabela[j][i]);
        }

        printf("\n");
    }

    return 0;
}