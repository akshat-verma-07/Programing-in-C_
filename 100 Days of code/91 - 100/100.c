#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s", str);

    int n = strlen(str);

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            for(int k=i; k<=j; k++)
                printf("%c",str[k]);
            if(!(i==n-1 && j==n-1))
                printf(",");
        }
    }

    return 0;
}
