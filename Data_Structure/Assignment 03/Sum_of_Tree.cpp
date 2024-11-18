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
pair<int,int>findMinMaxLeaf(Node* root) 
{
    pair<int,int>result=make_pair(INT_MIN,INT_MAX);
    if (root==NULL) 
    {
        return result;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) 
    {
        Node* node=q.front();
        q.pop();
        
        if(node->left==NULL&&node->right==NULL) 
        {
            result.first=max(result.first,node->data);
            result.second=min(result.second,node->data);
        }
        if (node->left) 
        {
            q.push(node->left);
        }
        
        if (node->right) 
        {
            q.push(node->right);        
        }
    }
    
    return result;
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
    pair<int,int>result=findMinMaxLeaf(root);
    cout<<result.first<<result.second<<endl;
    return 0;
}