#include<iostream>
using namespace std;

int binary(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    
    while(start < end ){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid]<key){
            start = mid +1;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int main(){

            int num;
            cout<<" Enter the size : ";
            cin>>num;

            int arr[num];
            cout<<endl<<"Enter the number's of the array : ";
            for(int i = 0 ; i<num; i++){
                cin>>arr[i];
            }

            int key;
            cout<<endl<<"Enter the value of the key : ";
            cin>>key;

            cout<<"\n The index of the given key is : "<<binary(arr,num,key);


    return 0;
}