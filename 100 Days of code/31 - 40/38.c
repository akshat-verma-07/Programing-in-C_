#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d is %d", n, sum);
    return 0;
}
