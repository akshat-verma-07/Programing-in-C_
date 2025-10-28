#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
    return 0;
}

