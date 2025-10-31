#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int a, b, x, y, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a; y = b;
    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    hcf = a;
    lcm = (x * y) / hcf;

    printf("LCM of %d and %d is %d", x, y, lcm);
    return 0;
}
