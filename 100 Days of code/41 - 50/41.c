#include <stdio.h>
#include <math.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);

    swapped = last * pow(10, digits) + (n % (int)pow(10, digits) / 10) * 10 + first;

    printf("After swapping first and last digit: %d", swapped);
    return 0;
}
