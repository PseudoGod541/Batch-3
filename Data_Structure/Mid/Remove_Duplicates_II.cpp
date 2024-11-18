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
class LinkedList
{
    public:
    Node* head;
    LinkedList()
    {
        head=NULL;
    }
    void insert(int data)
    {
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            Node* current=head;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newNode;
        }
    }
    void rmvdpl()
    {
        if(head==NULL)
        {
            return;
        }
        set<int>uniqueValues;
        Node* current=head;
        Node* prev=NULL;
        while(current!=NULL)
        {
            if(uniqueValues.count(current->data)>0)
            {
                prev->next=current->next;
                delete current;
                current=prev->next;
            }
            else
            {
                uniqueValues.insert(current->data);
                prev=current;
                current=current->next;
            }
        }
    }
    void print()
    {
        set<int>uniqueValues;
        Node* current=head;
        while(current!=NULL)
        {
            uniqueValues.insert(current->data);
            current=current->next;
        }
        for(int val:uniqueValues)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    LinkedList linkedlist;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        linkedlist.insert(val);
    }
    linkedlist.rmvdpl();
    linkedlist.print();
    return 0;
}
