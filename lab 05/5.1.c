/*4.1. WAP to enter numbers till the user wants. At the end, it should display 
the count of positive, negative, and Zeroes entered. */
 
#include <stdio.h> 
int main(){ 
    int pos=0,neg=0,zero=0; 
    int num; 
    while (1){ 
        printf("enter number(or -1 to quit):"); 
        scanf("%d",&num); 
 
        if (num==-1){ 
            break; 
        } 
        if (num>0){ 
            pos++; 
        } 
        else if (num<0){ 
            neg++; 
        } 
        else{ 
            zero++; 
        } 
        } 
printf("the number of values are
positive=%d,negative=%d,zeros=%d",pos,neg,zero); 
return 0; 
}
