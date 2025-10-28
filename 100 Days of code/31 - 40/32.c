#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n");
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(rev == n)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
