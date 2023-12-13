#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next=NULL;
    }
};

void instertathead(node* &head, int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}

void instertattail( node* &head,int val)
{

    

    node* n= new node(val);
    
    if(head==NULL)
    {
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){

    node* head = NULL;
    instertattail(head,1);
    instertattail(head,2);
    instertattail(head,3);
    instertathead(head,4);

    display(head);


    return 0;
}