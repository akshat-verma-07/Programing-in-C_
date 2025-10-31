#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    printf("HCF (GCD) of %d and %d is %d", x, y, a);
    return 0;
}
