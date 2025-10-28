/*4. ⁠Write a program to find the roots of the quadratic equations */ 
#include <stdio.h> 
#include <math.h> 
 
int main() { 
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart; 
 
    printf("Enter the coeAicients of the quadratic equation (ax^2 + bx + c = 0):\n"); 
    printf("Enter a: "); 
    scanf("%lf", &a); 
    printf("Enter b: "); 
    scanf("%lf", &b); 
    printf("Enter c: "); 
    scanf("%lf", &c); 
 
    if (a == 0) { 
        printf("The value of 'a' cannot be zero in a quadratic equation.\n"); 
        return 0;  
    } 
    discriminant = b * b - 4 * a * c; 
 
    root1 = (-b + sqrt(fabs(discriminant))) / (2 * a); 
    root2 = (-b - sqrt(fabs(discriminant))) / (2 * a); 
 
    if (discriminant > 0) 
        printf("Real and DiAerent roots: %.2lf and %.2lf\n", root1, root2); 
    else if (discriminant == 0) 
        printf("Real and Equal root: %.2lf\n", root1); 
else { 
realPart = -b / (2 * a); 
imaginaryPart = sqrt(-discriminant) / (2 * a); 
printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, 
realPart, imaginaryPart); 
} 
return 0; 
}
