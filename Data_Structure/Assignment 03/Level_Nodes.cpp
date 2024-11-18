#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool isPerfectTree(Node* root) 
{
    if(root==NULL) 
    {
        return true;
    }
    queue<Node*>q;
    q.push(root);
    int maxHeight=0;
    int totalNodes=0;
    while(!q.empty()) 
    {
        int levelSize=q.size();
        if(levelSize!=pow(2,maxHeight)) 
        {
            return false;
        }
        maxHeight++;
        for (int i=0;i<levelSize;i++) 
        {
            Node* node=q.front();
            q.pop();
            if(node->left) 
            {
                q.push(node->left);
            }
            if (node->right) 
            {
                q.push(node->right);
            }
            totalNodes++;
        }
    }
    return totalNodes==pow(2,maxHeight)-1;
}
Node *builtTree(string levelOrder)
{
    stringstream ss(levelOrder);
    string val;
    queue<Node*>nodeQueue;
    Node* root=NULL;
    if(getline(ss,val,' '))
    {
        if(val!="-1")
        {
            int rootVal=stoi(val);
            root=new Node(rootVal);
            nodeQueue.push(root);
        }
    }
    while(!nodeQueue.empty())
    {
        Node* currNode=nodeQueue.front();
        nodeQueue.pop();
        if(getline(ss,val,' '))
        {
            if(val!="-1")
            {
                int leftVal=stoi(val);
                currNode->left=new Node(leftVal);
                nodeQueue.push(currNode->left);
            }
        }
        if(getline(ss,val,' '))
        {
            if(val!="-1")
            {
                int rightVal=stoi(val);
                currNode->right=new Node(rightVal);
                nodeQueue.push(currNode->right);
            }
        }
    }
    return root;
}
int main()
{
    string levelOrder;
    getline(cin,levelOrder);
    Node *root=builtTree(levelOrder);
    bool isPerfect=isPerfectTree(root);
    if(isPerfect)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}