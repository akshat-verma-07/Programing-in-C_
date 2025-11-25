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

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}
