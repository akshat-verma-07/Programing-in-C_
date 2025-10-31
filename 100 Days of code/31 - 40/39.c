#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, digit, prod = 1, found = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while(temp > 0) {
        digit = temp % 10;
        if(digit % 2 != 0) {
            prod *= digit;
            found = 1;
        }
        temp /= 10;
    }

    if(!found) prod = 1;
    printf("Product of odd digits in %d is %d", n, prod);
    return 0;
}
