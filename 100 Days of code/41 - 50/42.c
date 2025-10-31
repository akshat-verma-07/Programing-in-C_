#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n / 2; i++)
        if(n % i == 0)
            sum += i;

    if(sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
