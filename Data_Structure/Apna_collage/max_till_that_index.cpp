#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    // 5, 4, 3, 2, 1
    // 1, 4, 2, 5, 8
    
        int counter= -9999999;

    for(int i=0;i<n;i++)
    {
        int counter=max(counter,arr[i]);
        cout<<counter<<endl;
    }

   //for(int i=0;i<n;i++){
   //cout<<arr[i];
   //}

    return 0;
}