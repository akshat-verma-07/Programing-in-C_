#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, a[100], sum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}
