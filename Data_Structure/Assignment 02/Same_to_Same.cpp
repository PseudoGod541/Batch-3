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
bool same(Node *head1,Node *head2)
{
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->val!=head2->val)
        {
            return false;
        }
        head1=head1->Next;
        head2=head2->Next;
    }
    if(head1==NULL&&head2==NULL)
    {
        return true;
    }
    return false;
}
int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head1,tail1,val);   
    }
    while (true)
    {
        cin>>val;
        if(val==-1)
            break;
        insert_tail(head2,tail2,val);  
    }
    if(same(head1,head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}