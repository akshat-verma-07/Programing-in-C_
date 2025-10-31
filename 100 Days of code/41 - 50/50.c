#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    for(int i = 0; i < 5; i++) {
        for(int s = 0; s < i; s++)
            printf(" ");
        for(int j = 5; j > i; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
