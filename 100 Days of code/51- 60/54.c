#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n = 4;

    // Upper part
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }

    // Lower part
    for(int i = n - 1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            printf(" ");
        for(int j = 1; j <= (2*i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
