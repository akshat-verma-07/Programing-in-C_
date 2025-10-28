/*6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to find the frequency of a particular number in a list of integers. */
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
 
    int tvar,varcount=0; 
    printf("Enter the number to find the frequency of:"); 
    scanf("%d",&tvar); 
 
    for (int i=0;i<size;i++){ 
        if(arr[i]==tvar){ 
            varcount++; 
        } 
} 
printf("The frequency of the given number %d is: %d",tvar,varcount); 
return 0; 
}
