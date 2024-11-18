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
void maxmin(Node* head)
{
    int minimum=INT_MAX;
    int maximum=INT_MIN;
    Node* current= head;
    while(current!=NULL)
    {
        if(current->val>maximum)
        {
            maximum=current->val;
        }
        if(current->val<minimum)
        {
            minimum=current->val;
        }
        current=current->Next;
    }
    cout<<maximum<<" "<<minimum<<endl;
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
    maxmin(head);
    return 0;
}