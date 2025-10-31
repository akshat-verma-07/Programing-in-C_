#include <stdio.h>
#include <string.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char bin[50];
    printf("Enter a binary number: ");
    scanf("%s", bin);

    for(int i = 0; i < strlen(bin); i++) {
        if(bin[i] == '0')
            bin[i] = '1';
        else if(bin[i] == '1')
            bin[i] = '0';
    }

    printf("1's Complement: %s", bin);
    return 0;
}
