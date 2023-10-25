/*
 * C program to find the area of a triangle using Heron's formula
 */
#include<stdio.h>
#include<math.h>
 
int main(){

int i,n,a=0,b=1,c;

scanf("%d", &n);

for ( i = 0; i < n; i++)
{
        
        c=a+b;
        a=b;
        b=c;
        printf("%d", c);
}




    return 0;
}