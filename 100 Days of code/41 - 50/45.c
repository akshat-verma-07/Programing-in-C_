#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 2, den = 3;
    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Approximate sum: %.2f", sum);
    return 0;
}
