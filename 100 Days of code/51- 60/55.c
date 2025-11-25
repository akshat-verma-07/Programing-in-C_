#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        int prime = 1;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ", i);
    }

    return 0;
}
