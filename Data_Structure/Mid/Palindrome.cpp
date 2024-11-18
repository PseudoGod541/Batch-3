#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* current=head;
    Node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
bool isPali(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* half=slow;
    if(slow->next!=NULL)
    {
        half=slow->next;
    }
    Node* current1=head;
    Node* current2=reverse(half);
    while(current2!=NULL)
    {
        if(current1->data!=current2->data)
        {
            return false;
        }
        current1=current1->next;
        current2=current2->next;
    }
    return true;
}
Node* LinkedList()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}
int main()
{
    Node* head=LinkedList();
    if(isPali(head))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}