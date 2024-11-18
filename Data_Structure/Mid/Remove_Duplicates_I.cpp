#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* rmvdpli(Node* head)
{
    if(head==NULL)
    {
    return NULL;
    }
    set<int>uniqueValues;
    Node* current=head;
    Node* prev=NULL;
    while(current!=NULL)
    {
        if(uniqueValues.count(current->data)>0)
        {
            prev->next=current->next;
            Node* temp=current;
            current=current->next;
            delete temp;
        }
        else
        {
            uniqueValues.insert(current->data);
            prev=current;
            current=current->next;
        }
    }
    return head;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* scan()
{
    Node* head=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        Node* newNode=new Node(val);
        if(head==NULL||val<head->data)
        {
        newNode->next=head;
        head=newNode;
        }
        else
        {
            Node* current=head;
            while(current->next!=NULL&&current->next->data<=val)
            {
                current=current->next;
            }
            newNode->next=current->next;
            current->next=newNode;
        }
    }
    return head;
}
int main()
{
    Node* head=scan();
    head=rmvdpli(head);
    print(head);
    return 0;
}