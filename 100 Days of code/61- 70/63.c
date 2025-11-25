#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n1, n2, i;
    scanf("%d", &n1);

    int a[n1];
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++) printf("%d ", a[i]);
    for(i = 0; i < n2; i++) printf("%d ", b[i]);

    return 0;
}
