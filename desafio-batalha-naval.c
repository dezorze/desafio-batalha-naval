#include <stdio.h>

//Posicionando o prmeiro navio em D, linhas 4,5,6:
void firstship(int table[10][10]) {
    for(int i = 3; i < 6; i++) {
        table[i][3] = 3;
    }
}

//Posicionando o segundo navio H,I,J, linha 9:
void secondship(int table[10][10]) {
    for(int i = 7; i < 10; i++) {
        table[8][i] = 3;
    }
}

// Função para criar as colunas (A, B, C...)
void columns(int cols) {
    printf("   "); // Espaço inicial para alinhar
    for (int i = 0; i < cols; i++) {
        printf(" %c", 'A' + i);
    }
    printf("\n");
}

// Função para imprimir as linhas e a tabela
void lines(int linhas, int cols, int table[10][10]) {
    for (int j = 0; j < linhas; j++) {
        printf("%2d ", 1 + j); // Número da linha
        for (int i = 0; i < cols; i++) {
            printf("%2d", table[j][i]);
        }
        printf("\n");
    }
}

//Habilidade Cone. Aqui testei colocar 3 fors, um dentro do outro.
void cone(int table[10][10]) {
    for(int i = 5; i < 10; i++) {
        table[3][i] = 1;
        for(int i = 6; i < 9; i++) {
            table[4][i] = 1;
            for(int i = 7; i < 8; i++) {
                table[5][i] = 1; 
            }
        }
    }
}

//Habilidade Octaedro
void octaedro(int table[10][10]) {
    for(int i = 0; i < 3; i++){
        table[1][i] = 1;
        for(int j = 0; j < 3; j++) {
            table[j][1] = 1;
        }
    }
}

//Habilidade Cruz
void cruz(int table[10][10]) {
    for(int i = 5; i < 10; i++){
        table[1][i] = 1;
        for(int j = 0; j < 3; j++) {
            table[j][7] = 1;
        }
    }
}


int main() {
    int cols = 10;
    int linhas = 10;
    int table[10][10];
    
    //Inicializando a table para evitar lixo na memoria
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < cols; j++) {
            table[i][j] = 0;
        }
    }


    // Exibe o tabuleiro
    cone(table);
    cruz(table);
    octaedro(table);
    firstship(table);
    secondship(table);
    columns(cols);
    lines(linhas, cols, table);

    return 0;
}
