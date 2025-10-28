#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char ch;
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}
