#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char date[20];
    scanf("%s", date);

    char dd[3], mm[3], yyyy[10];
    strncpy(dd, date, 2); dd[2]='\0';
    strncpy(mm, date+3, 2); mm[2]='\0';
    strcpy(yyyy, date+6);

    char *monthNames[] = {"Jan","Feb","Mar","Apr","May","Jun",
                          "Jul","Aug","Sep","Oct","Nov","Dec"};

    int m = (mm[0]-'0')*10 + (mm[1]-'0');

    printf("%s-%s-%s", dd, monthNames[m-1], yyyy);

    return 0;
}
