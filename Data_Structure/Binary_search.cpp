#include<iostream>
using namespace std;

int binary(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

        while(start<end){
            if (arr[mid] == key){
                return mid;
            }
            else if (arr[mid]<key){
                start = mid+1;
            }
            else if (arr[mid]>key){
                end = mid-1;
            }
                mid = start + (end-start)/2;
        }
            return -1;
}


  int main(){
    

int n,key;
        cout<<"enter the number how lond array you need : ";
        cin>>n;
        
        int arr[n];
        
        cout<<endl<<"enter the number's of the array : ";
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        cout<<endl<<"Enter the value of the key : ";
        cin>>key;
        //int index = binary(arr,n,key);
        cout<<endl<<"The index of the number is : "<<binary(arr,n,key);



// int even[6] = {1,2,3,4,5,6};
// int odd[7] = {1,2,3,4,5,6,7};

// int index = binary(even,6,1);
// int index2 = binary(odd,7,2);

// cout<<"The key is at index : "<<index<<endl;
// cout<<"The key of the second arr is at : "<<index2;
    return 0;
}
