#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char a[1000], b[1000];
    scanf("%s %s", a, b);

    if(strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }

    char temp[2000];
    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
