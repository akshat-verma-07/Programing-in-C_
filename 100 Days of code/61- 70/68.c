#include <stdio.h>

int main(){
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, pos, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    for(i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}
