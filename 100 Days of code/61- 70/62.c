#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, i, temp;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int start = 0, end = n - 1;
    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
