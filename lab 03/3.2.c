/*3.2. WAP to check if the triangle is valid or not. If the validity is established, do check if 
the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as 
input from a user. */
 
#include <stdio.h> 
int main(){ 
    int a,b,c; 
 
    printf("enter the sides of the triangle:"); 
    scanf("%d%d%d",&a,&b,&c); 
 
    if (((a+b)>c)&&((b+c)>a)&&((c+a)>b)){ 
        printf("the triangle is valid\n"); 
    } 
    else{ 
        printf("the triangle is not valid\n"); 
        return 0; 
    } 
    if (a==b && b==c){ 
        printf("the triangle is equilateral\n"); 
    } 
    else if ((a*a + b*b == c*c) ||  
    (b*b + c*c == a*a) ||  
    (c*c + a*a == b*b)){ 
        printf("the triangle is right angled\n"); 
        if(a==b || b==c || c==a){ 
            printf("It is also isosceles\n"); 
    } 
} 
else if ((a==b)||(b==c)||(c==a)){ 
printf("the triangle is isosceles\n"); 
} 
else { 
printf("the triangle is scalene\n"); 
} 
return 0; 
}
