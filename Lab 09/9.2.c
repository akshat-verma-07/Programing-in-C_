/*6.2. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to count and display positive, negative, odd, and even numbers in an array. */
#include <stdio.h> 
int main(){ 
 
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n"); 
     
    int size; 
 
    printf("Enter the size of the array:"); 
    scanf("%d",&size); 
 
    int arr[size]; 
 
    for (int i=0;i<size;i++){ 
        printf("Enter integer at index %d:",i); 
        scanf("%d",&arr[i]); 
    } 
 
    int pos=0,neg=0,odd=0,even=0; 
    for (int i=0;i<size;i++){ 
        if(arr[i]>0){ 
            pos++; 
        } 
        else if(arr[i]<0){ 
            neg++; 
        } 
if(arr[i]%2==0){ 
even++; 
} 
else{ 
odd++; 
} 
} 
printf("The number of values 
are:\nPositive=%d\nNegative=%d\nEven=%d\nOdd=%d",pos,neg,even,odd); 
return 0; 
}
