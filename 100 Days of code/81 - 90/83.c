#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s",str);

    int v=0,c=0;

    for(int i=0; str[i]; i++) {
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            c++;
    }

    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}
