#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int value;
    Node* prev;
    Node* next;
    Node(int val)
    {
        value=val;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedlist
{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedlist()
    {
        head=NULL;
        tail=NULL;
    }

void insert(int index,int value)
{
    Node* newNode=new Node(value);

    if(head==NULL)
    {
        if(index!=0)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        head=newNode;
        tail=newNode;

    }
    else
    {
        if(index==0)
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        else
        {
            Node* curr=head;
            int currindex=0;
            while(curr!=NULL&&currindex<index)
            {
                curr=curr->next;
                currindex++;
            }
            if(curr==NULL&&currindex!=index)
            {
                cout<<"Invalid"<<endl;
                return;
            }
            if(curr==NULL)
            {
                newNode->prev=tail;
                tail->next=newNode;
                tail=newNode;
            }
            else
            {
                newNode->prev=curr->prev;
                newNode->next=curr;
                curr->prev->next=newNode;
                curr->prev=newNode;
            }
        }
    }
    printleftright();
    printrightleft();
}
void printleftright()
{
    Node* curr=head;
    cout<<"L -> ";
    while(curr!=NULL)
    {
        cout<<curr->value<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void printrightleft()
{
    Node* curr=tail;
    cout<<"R -> ";
    while(curr!=NULL)
    {
        cout<<curr->value<<" ";
        curr=curr->prev;
    }
    cout<<endl;
}
};
int main()
{
    int Q;
    cin>>Q;
    DoublyLinkedlist List;
    for(int i=0;i<Q;i++)
    {
        int X,V;
        cin>>X>>V;
        List.insert(X,V);
    }
    return 0;
}
