#include<stdio.h>

int main(){

int arr[10],i,num,flag=0,temp;

printf("Enter the value of array : ");

for(i=0;i<10;i++){
    scanf("%d", &arr[i]);
}

printf("enter the number which you want to search : ");
scanf("%d",&num);

for(i=0;i<10;i++){
    if(num==arr[i]){
        flag=1;
        break;
    }
    
}

if(flag==1){
    printf("Find the number %d at place %d",num,arr[i]);
}
    return 0;
}