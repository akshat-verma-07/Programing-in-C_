#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Largest is %d", a);
    else if (b >= a && b >= c)
        printf("Largest is %d", b);
    else
        printf("Largest is %d", c);
    return 0;
}
