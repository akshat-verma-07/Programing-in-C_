#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], rowSum[r];

    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        rowSum[i] = sum;
    }

    for(int i = 0; i < r; i++)
        printf("%d ", rowSum[i]);

    return 0;
}
