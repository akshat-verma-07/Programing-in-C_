#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    int spaces=0, digits=0, special=0;

    for(int i=0; str[i]; i++) {
        if(str[i]==' ')
            spaces++;
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(str[i]!='\n')
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d",spaces,digits,special);
    return 0;
}
