#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Stack
{
public:
    Node *top;
    Stack()
    {
        top=NULL;
    }
    void push(int value)
    {
        Node *newNode=new Node(value);
        newNode->next=top;
        top=newNode;
    }
    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        int value=top->data;
        Node* temp=top;
        top=top->next;
        delete temp;
        return value;

    }
    bool isEmpty()
    {
    return top==NULL;
    }
};
class Queue
{
public:
    Node* front;
    Node* rear;
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int value)
    {
        Node *newNode=new Node(value);
        if(isEmpty())
        {
            front=newNode;
            rear=newNode;
        }
        else
        {
            rear->next=newNode;
            rear=newNode;
        }
    }
    int dequeue()
    {
        if(isEmpty())
        {
            return -1;
        }
        int value=front->data;
        Node* temp=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        delete temp;
        return value;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
};
int main()
{
    int N,M;
    cin>>N>>M;
    Stack stack;
    Queue queue;
    for(int i=0;i<N;i++)
    {
        int value;
        cin>>value;
        stack.push(value);
    }
    for(int i=0;i<M;i++)
    {
        int value;
        cin>>value;
        queue.enqueue(value);
    }
    while(!stack.isEmpty()&&!queue.isEmpty())
    {
        int stackElem=stack.pop();
        int queueElem=queue.dequeue();
        if(stackElem!=queueElem)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(stack.isEmpty()&&queue.isEmpty())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
