#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s",str);

    int n=strlen(str);
    int pal=1;

    for(int i=0;i<n/2;i++)
        if(str[i]!=str[n-i-1])
            pal=0;

    if(pal) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
