#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s",str);

    for(int i=0; str[i]; i++) {
        if(str[i]>='a'&&str[i]<='z')
            str[i] = str[i] - 32;
        else if(str[i]>='A'&&str[i]<='Z')
            str[i] = str[i] + 32;
    }

    printf("%s",str);
    return 0;
}
