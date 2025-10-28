/*3.5. According to the gregorian calendar, it was Monday on the date 
01/01/01. If any year is input through the keyboard write a program to find 
out what is the day on 1st January of this year. */
#include <stdio.h> 
int main(){ 
int year,ypassed,lyears; 
printf("enter year to be checked:"); 
scanf("%d",&year); 
ypassed=year-1; 
lyears=((ypassed/4)-(ypassed/100)+(ypassed/400)); 
int tdays=ypassed+lyears; 
int daysindex=tdays%7; 
switch (daysindex) 
    { 
    case 0: 
        printf("It was a Monday\n"); 
        break; 
     
    case 1: 
        printf("It was a Tuesday\n");             
        break; 
    case 2: 
        printf("It was a Wednesday\n");             
        break; 
    case 3: 
        printf("It was a Thursday\n");             
        break; 
    case 4: 
        printf("It was a Friday\n");             
        break; 
    case 5: 
        printf("It was a Saturday\n");             
        break; 
    case 6: 
        printf("It was a Sunday\n");             
        break; 
    default: 
        break; 
} 
}
