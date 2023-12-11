#include<iostream>
using namespace std;

void towerofhanoi(int n,char source, char destinantion, char helper)
{
    if(n==0)
    {
        return;
    }

        towerofhanoi(n-1,source,helper,destinantion);
        cout<<"Move from "<<source<<" to "<<destinantion<<endl;
        towerofhanoi(n-1,helper,destinantion,source);

}

int main(){
    towerofhanoi(3,'a','c','b');
    return 0;
}