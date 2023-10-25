#include<iostream>
using namespace std;

int main(){

int mat1[3][3], mat2[3][3], mat3[3][3],i,j;

cout<<"Enter the numbers of matrics one : ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>mat1[i][j];
    }
}

cout<<"enter the value of second matrics : ";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>mat2[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
}


cout<<"The sum of the matrics is \n";

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<"\t";
        cout<<mat3[i][j];
        
    }
    cout<<"\n";

}

    return 0;
}