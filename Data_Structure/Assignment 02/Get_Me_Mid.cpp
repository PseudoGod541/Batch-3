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
void middle(Node *head)
{
    Node *one=head;
    Node *two=head;
    while(two!=NULL&&two->Next!=NULL)
    {
    one=one->Next;
    two=two->Next->Next;
    }
    if(two!=NULL)
    {
        cout<<one->val<<endl;
    }
    else
    {
        cout<<one->val<<" "<<one->Next->val<<endl;
    }
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
    for(Node *i=head;i->Next!=NULL;i=i->Next)
    {
        for(Node *j=i->Next;j!=NULL;j=j->Next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    middle(head);
    return 0;
}