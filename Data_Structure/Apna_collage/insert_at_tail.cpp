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

void instertathead(node* &head, int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}

void insertattail(node* &head,int value)
{
    node* new_node = new node(value);

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = new_node;
}

// void insertatposition(node* &head, int value,int pos)
// {
//     if(pos==0)
//     {
//         instertathead(head,value);
//         return ;
//     }

// void insertatposition(node* &head, int value, int pos)
// {
//     if(pos==0)
//     {
//         instertathead(head,value);
//         return ;
//     }

//     node* new_node = new node(value);
//     node* temp = head;
//     int current_pos = 0;
//     while(current_pos = pos-1)
//     {
//         temp = temp->next;
//         current_pos++;
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;

// }

//     node* new_node = new node(value);
//     node* temp = head;
//     int current_pos = 0;
//     while(current_pos!=pos-1) 
//     {
//         temp = temp->next;
//         current_pos++;
//     }



//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void insertatposition(node* &head, int value,int pos)
// {
//     node* new_node = new node(value);
//     node* temp = head;
//     if(pos==0)
//     {
//         instertathead(head,value);
//         return ;
//     }
//     int currentpos=0;
//     while(currentpos!=pos-1)
//     {
//         temp = temp->next;
//         currentpos++;
//     }
//     new_node->next = temp->next;
//     temp->next = new_node;

// }

void insertatposition(node* &head, int value, int pos)
{
    if(pos==0)
    {
        instertathead(head, value);
        return ;
    }
    node* new_node = new node(value);
    node* temp = head;
    int currentPos=0;

    while(currentPos!=pos-1)
    {
        temp = temp->next;
        currentPos++;
    }

    new_node

}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

node* head = NULL;
instertathead(head,9);
instertathead(head,8);
insertattail(head,1);
insertattail(head,2);
insertatposition(head,7,1);

display(head);

    return 0;
}