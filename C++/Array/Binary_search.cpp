#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){

    int start = 0;
    int end = (size-1);
    int mid = start + (end-start)/2;

    while(start<=end){

        if (arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid])
        {end=mid-1;}
        

        mid=start + (end-start)/2;
        
    }
    
    return -1;
}

int main(){

int even[8]= {22,33,44,55,66,77,88,99};

int evenIndex = binarySearch(even,8,33);

cout<<"the index of the key is : "<<evenIndex;

}