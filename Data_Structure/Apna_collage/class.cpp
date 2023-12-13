#include<iostream>
using namespace std;

    class student{
        public:
        string name;
        int age;
        bool gender;
        void printInfo(){
            cout<<"Name = ";
            cout<<name<<endl;
            cout<<"Age = ";
            cout<<age<<endl;
            cout<<"Gender = ";
            cout<<gender<<endl;
        }

        // student(string s,int a,int g)
        // {
        //     name =s;
        //     age = a;
        //     gender = g;
        // }
        // void getName(){
        //     cout<<name<<endl;
        // }
    };

    //printing the class


int main(){

    // student a("Ritesh",24,1);
    // a.printInfo();
    // student a;
    // a.name = "Ritesh";
    // a.age = 24;
    // a.gender = 1;



    //Array of class;

    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"Name : ";
        cin>>arr[i].name;
        cout<<"Age : ";
        cin>>arr[i].age;
        cout<<"Gender : ";
        cin>>arr[i].gender;
        cout<<endl<<endl;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].printInfo();
    }

    return 0;
}