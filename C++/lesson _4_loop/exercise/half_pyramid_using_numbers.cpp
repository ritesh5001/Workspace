#include<iostream>
using namespace std;
int main(){
int i,j,n,row;
cin>>n;
for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
        row=i;
        cout<<row;
    }cout<<endl;
}

    return 0;
}