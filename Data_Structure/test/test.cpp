#include<iostream>
using namespace std;


int binary(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + ( end - start)/2;

    while (start < end){
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            start = mid+1;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start )/2;
    }
        return -1;
}

int main(){

        int n,key;
        cout<<"enter the size of the array : ";
        cin>>n;
     
        int arr[n];
        
        cout<<endl<<"enter the number's of the array : ";
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        cout<<endl<<"Enter the value of the key : ";
        cin>>key;
        cout<<endl<<"the value of the index is : "<<binary(arr,n,key);

    return 0;
}