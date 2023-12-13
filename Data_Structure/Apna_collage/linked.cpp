// #include<iostream>
// using namespace std;

// // class node 
// // {
// //     public:
// //     int data;
// //     node* next;
// //     node(int value)
// //     {
// //         value = data;
// //         next = NULL;
// //     }
// // };

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// // void insertathead( node* &head, int value)
// // {
// //     node* new_node = new node(value);
// //     new_node->next=head;
// //     head=new_node;

// // }

// void insertathead(node* &head,int value)
// {
//     node* new_nod = new node(value);
//     new_nod->next=head;
//     head = new_nod;
// }

// void display(node* head)
// {
//     node* temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){

// node* head = NULL;
// insertathead(head,2);
// insertathead(head,1);
// display(head);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }

// };

// void insertathead(node* &head, int value)
// {
//     node* new_node = new node(value);
//     new_node->next = head;
//     head=new_node;
// }

// void display(node* head)
// {
//     node* temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){

//     node* head = NULL;
//     insertathead(head,2);
//     insertathead(head,1);
//     display(head);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }

// };

// void insertathead(node* &head,int value)
// {
//     node* new_node = new node(value);
//     new_node->next=head;
//     head = new_node;
// }

// void display(node* head)
// {
//    node* temp = head;
//    while(temp!=NULL)
//    {
//     cout<<temp->data<<"->";
//     temp=temp->next;
//    }
//    cout<<"NULL";
// }


// int main(){

// node* head = NULL;
//     insertathead(head,1);
//     insertathead(head,2);
//     insertathead(head,3);

//     display(head);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data; 
//     node* next;
//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };


// void insertathead(node* &head,int value)
// {
//     node* new_node = new node(value);
//     new_node->next=head;
//     head=new_node;
// }

// void display(node* head)
// {
//     node* temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }

//     cout<<"NULL"<<endl;
// }

// int main(){

// node* head=NULL;
// insertathead(head,1);
// insertathead(head,2);
// insertathead(head,3);
// insertathead(head,4);

// display(head);



//     return 0;

// }

// #include<iostream>
// using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// void insertathead(node* &head,int value)
// {
//     node* new_node = new node(value);
//     new_node->next=head;
//     head = new_node;
// }

// void display(node* head)
// {
//     node* temp = head;
//     while(temp!=NULL)
//     {
//     cout<<temp->data<<"->";
//     temp= temp->next;
//     }
//     cout<<"NULL"<<endl;
// }


// int main(){

//     node* head=NULL;
//     insertathead(head,1);
//     insertathead(head,2);
//     insertathead(head,3);
//     insertathead(head,4);
//     insertathead(head,5);

//     Display The Node

//     display(head);
//     return 0;
// }

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void instertathead(node* &head, int value)
{
    node* new_node = new node(value);
    new_node->next=head;
    head = new_node;
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

node* head = NULL;

instertathead(head,1);
instertathead(head,2);
instertathead(head,3);
instertathead(head,4);
instertathead(head,5);

display(head);

    return 0;
}