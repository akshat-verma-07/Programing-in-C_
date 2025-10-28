#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            printf("%d ", i);
    }
    return 0;
}

