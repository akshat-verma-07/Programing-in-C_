#include <stdio.h>
#include <math.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n");
    int n, sum = 0, temp, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
