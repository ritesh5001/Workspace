#include<iostream>
using namespace std; 

int main(){

    int n,m;
    cout<<"enter the dimenstion of the first matrix : ";
    cin>>n>>m;

    int a,b;
    cout<<"enter the dimenstion of the second matrix : ";
    cin>>a>>b;

   
    if(m==a)
    {

         int arr1[n][m];
    cout<<"enter the elements of the first matrix : ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }

    
    int arr2[n][m];
    cout<<"enter the elements if the second matrix : ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }

    int arr3[n][b];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



        for(int i=0;i<n;i++)
        {
            for(int j=0;j<b;j++)
            {
                for(int k=0;k<a;k++)
                {
                   arr3[i][j]+= (arr1[i][k]*arr2[k][j]);     
                }
            }
            

            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else(cout<<"\nenter the correct dimention for multiplyning the matrix , thank you. ");

            

        //      1   2   3 
        //      4   5   6 
        //      7   8   9

    // int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    // while(row_start <=row_end && col_start<=col_end)
    // {    
    //     // for firt row
    //     for(int i=col_start;i<=col_end;i++){
    //         cout<<arr[row_start][i]<<" ";
    //     }
    //     row_start++;

    //     for(int i=row_start;i<=row_end;i++)
    //     {
    //         cout<<arr[i][col_end]<<" ";
    //     }
    //     col_end--;

    //     for(int i=col_end;i>=col_start;i--)
    //     {
    //         cout<<arr[row_end][i]<<" ";
    //     }
    //     row_end--;

    //     for(int i=row_end;i>=row_start;i--)
    //     {
    //         cout<<arr[i][col_start]<<" ";
    //     }
    //     col_start++;
    // }


    return 0;
}