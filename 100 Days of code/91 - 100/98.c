#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    int len = strlen(str);

    printf("%c.", str[0]);  

    int lastSpace = -1;
    for(int i=0; str[i]; i++)
        if(str[i]==' ')
            lastSpace = i;

    for(int i=1; i<lastSpace; i++) {
        if(str[i]==' ')
            printf("%c.", str[i+1]);
    }

    printf(" ");

    for(int i=lastSpace+1; str[i] && str[i]!='\n'; i++)
        printf("%c", str[i]);

    return 0;
}
