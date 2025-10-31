#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    for(int i = 5; i >= 1; i--) {
        for(int j = i; j <= 5; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
