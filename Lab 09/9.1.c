/*6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to print the second largest integer in a list of integers.*/ 
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
 
    int largest,secondlargest; 
 
    if (arr[0] > arr[1]) { 
        largest = arr[0]; 
        secondlargest = arr[1]; 
    } else { 
        largest = arr[1]; 
secondlargest = arr[0]; 
} 
for (int j = 2; j < size; j++) { 
if (arr[j] > largest) { 
secondlargest = largest;  
largest = arr[j];    
} else if (arr[j] > secondlargest && arr[j] != largest) { 
secondlargest = arr[j];  
} 
} 
if (largest == secondlargest) { 
printf("There is no distinct second largest element.\n"); 
} else { 
printf("The second largest integer is: %d\n", secondlargest); 
} 
return 0; 
} 
