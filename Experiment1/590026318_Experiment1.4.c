#include <stdio.h>

int main() 
{
    printf("Name- Akshat Verma\nSap Id- 590026318\nCource name- BCA\nBatch- B6");
    printf("\n-----------------------------------------------------------------\n");
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    getch();
    return 0;
}
