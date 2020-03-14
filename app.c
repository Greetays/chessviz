#include <stdio.h>

int main()
{
    int start2, finish2, int_start1, int_finish1;
    char start1, t, finish1, figure;
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
    scanf("%c%d%c%c%d", &start1, &start2, &t, &finish1, &finish2);
    int_start1 = start1;
    int_finish1 = finish1;
    int_start1 = (int_start1 + 3) % 10;
    int_finish1 = (int_finish1 + 3) % 10;
    start2--;
    finish2--;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (j == int_start1 && i == start2) {
                figure = ch[i][j];
                ch[i][j] = ' ';
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (j == int_finish1 && i == finish2) {
                ch[i][j] = figure;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", ch[i][j]);
        }
        printf("\n");
    }
    return 0;
}
