#include<iostream>
using namespace std;


int main(){
int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n],i;
cout<<"Enter the value of the array : ";
for (int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<endl<<"The numbers of array are : ";
for(int i=0; i<n; i++){
    cout<<arr[i];
}

    return 0;
}