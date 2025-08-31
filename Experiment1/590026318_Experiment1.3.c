#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    printf("Name- Akshat Verma\nSap Id- 590026318\nCource name- BCA\nBatch- B6");
    printf("\n-----------------------------------------------------------------\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s! You are %d years old.\n", name, age);
    getch();
    return 0;
}
