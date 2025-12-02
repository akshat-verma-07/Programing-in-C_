/* 
Q120: Write a program to take a string and convert it to sentence case 
(each word starts with capital letter).
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    scanf("%[^\n]s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0 || str[i-1] == ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = str[i];
    }

    printf("%s", str);

    return 0;
}
