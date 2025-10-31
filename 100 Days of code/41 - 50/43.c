#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
