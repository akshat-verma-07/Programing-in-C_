#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Upper diagonals including main
    for(int start = 0; start < c; start++) {
        int i = 0, j = start;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++; j--;
        }
    }

    // Lower diagonals after main
    for(int start = 1; start < r; start++) {
        int i = start, j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++; j--;
        }
    }

    return 0;
}
