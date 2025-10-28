#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");
        
    return 0;
}
