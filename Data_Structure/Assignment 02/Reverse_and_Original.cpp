#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *Next;
        Node(int val)
        {
            this->val=val;
            this->Next=NULL;
        }
};
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=newNode;
}
void reverse(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    reverse(head->Next);
    cout<<head->val<<" ";
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head,tail,val);    
    }
    reverse(head);
    cout<<endl;
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->Next;
    }
    return 0;
}