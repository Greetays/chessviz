#include <stdio.h>

int main()
{
    int k2, k22, m1, m11;
    char k1, t, k11, figure;
    char ch[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                     {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", ch[i][j]);
        }
        printf("\n");
    }
    printf("White's move. Enter the coordinates: ");
    scanf("%d%d%d%d%d", k1, k2, t, k11, k22);
    k1 = (k1 - 1) % 10;
    k11 = (k11 - 1) % 10;
    printf("%d, %d", k1, k11);
    for (int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if (j == k1 && i == k2 - 1){
                figure == ch[i][j];
                ch[i][j] = ' ';
            }
        }
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (j == k11 && i == k22){
                ch[i][j] = figure;
            }
        }
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%c ", ch[i][j]);
        }
        printf("\n");
    }
    return 0;
}
