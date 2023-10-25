#include <stdio.h>
#include <math.h>


int main(){

int a,b,c,d,r1,r2;

printf("Enter the numbers : ");
scanf("%d%d%d", &a,&b,&c);

d= b*b-(4*a*c) ;

if(d>0){
    printf("\nThe square roots are : ");

    r1= (-b +sqrt(d));
    r2= (-b -sqrt(d));
    printf("The roots are : %d and %d ",r1,r2);}


else if(d==0){

    printf("The roots are equal ");
    r1=(-b+sqrt(d));

    printf("the roots are equal that is : %d ", r1 );

}

else{printf("Roots are imaginary ");}


    return 0;
}