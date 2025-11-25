#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int a[n][n], sum = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j) sum += a[i][j];
        }

    printf("%d", sum);

    return 0;
}
