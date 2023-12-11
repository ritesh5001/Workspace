#include<iostream>
using namespace std;
 
int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while (s<e){
        swap(name[s++],name[e--]);
    }
}

bool palindrome(char na[],int l){
   int st = 0;
int en = l-1;
    
  while(st<=en){
    if(na[st] != na[en] ){
          return 0;
    }
      else{
           st++;
           en--;
     }
 }
return 1;}
  
int main(){

    char name[20];

    cout<< "Enter the name"<<endl;
    cin>>name;
    int n=getlength(name);
    cout<<"The count is : "<<getlength(name)<<endl;
    reverse(name,n);
    cout<<endl<<"The reverse is : "<<name<<endl;
    cout<<"palindrome or not : "<<palindrome(name,n)<<endl;

    return 0;
}
