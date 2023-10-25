// for the armstrong number. 

#include<stdio.h>

int main(){

int i,n, sum=0, temp;

printf("enter the number : ");
scanf("%d",&n);

temp=n;

while(n>0){

i=n%10;
sum=sum+(i*i*i);
n=n/10;

}

if(sum==temp){
    printf("%d is a armstrong number ", sum);

}

else{printf("%d is not a armstrong ", temp);}

    return 0;
}