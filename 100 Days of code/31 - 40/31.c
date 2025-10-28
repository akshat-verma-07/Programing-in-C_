#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n");
    int n, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    return 0;
}
