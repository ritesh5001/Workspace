#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    cout<<"\nenter the number of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // 5, 4, 3, 2, 1

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[i]){
    //             swap(arr[j],arr[i]);
    //         }
    //     }
    // }
    
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }


    cout<<"\nThe shorted array are : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;

}