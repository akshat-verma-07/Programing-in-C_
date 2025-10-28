/*6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A 
and B. Read matrix A and matrix B in row major order respectively. Print both the input 
matrices and resultant matrix with suitable headings and output should be in matrix 
format only. Program must check the compatibility of orders of the matrices for 
multiplication. Report appropriate message in case of incompatibility */
#include <stdio.h> 
int main(){ 
printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
printf("\n--------------------------------------\n"); 
int r,c,r1,c1; 
    printf("Enter the matrices of the array:"); 
    scanf("%d%d", &r, &c); 
    printf("Enter the matrices of the second array:"); 
    scanf("%d%d", &r1, &c1); 
 
    if (c != r1) { 
        printf("\nMatrix multiplication is not possible.\n"); 
        return 0;  
    } 
 
    int arr[r][c],arr1[r1][c1],farr[r][c1]; 
 
    for (int i=0;i<r;i++){ 
        for (int j=0;j<c;j++){ 
        printf("Enter integer at index (%d, %d):",i,j); 
        scanf("%d",&arr[i][j]); 
    } 
    } 
for (int i=0;i<r1;i++){ 
        for (int j=0;j<c1;j++){ 
        printf("Enter integer at index (%d, %d):",i,j); 
        scanf("%d",&arr1[i][j]); 
    } 
    } 
 
    for (int i=0;i<r;i++){ 
        for (int j=0;j<c1;j++){ 
            farr[i][j]=0; 
        for (int k=0;k<c;k++){ 
            farr[i][j]=farr[i][j]+(arr[i][k]*arr1[k][j]); 
        } 
    } 
    } 
printf("\nMatrix A is:\n"); 
for (int i = 0; i < r; i++) { 
    for (int j = 0; j < c; j++) { 
        printf("%d\t", arr[i][j]); 
    } 
    printf("\n"); 
} 
 
printf("\nMatrix B is:\n"); 
for (int i = 0; i < r1; i++) { 
    for (int j = 0; j < c1; j++) { 
        printf("%d\t", arr1[i][j]); 
    } 
    printf("\n"); 
} 
 
    printf("\nThe resulting matrix is:\n"); 
for (int i = 0; i < r; i++) { 
    for (int j = 0; j < c1; j++) { 
        printf("%d\t", farr[i][j]); 
    } 
    printf("\n"); 
     
} 
return 0; 
} 
