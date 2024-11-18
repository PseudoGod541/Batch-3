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
void insert_head(Node *&head,Node *&tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        newNode->Next=head;
        head=newNode;
    }
}
    
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
void print(Node *head,Node *tail)
{
    cout<<head->val<<" "<<tail->val<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int X,V;
        cin>>X>>V;
        if(X==0)
        {
            insert_head(head,tail,V);
        }
        else
        {
            insert_tail(head,tail,V);
        }
        print(head,tail);
    }
}