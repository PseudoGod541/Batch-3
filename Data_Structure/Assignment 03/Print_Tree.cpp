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
vector<int>printNodesAtLevel(Node* root,int level) 
{
    vector<int>result;
    if (root==NULL) 
    {
        return result;
    }
    queue<Node*>q;
    q.push(root);
    int currentLevel=0;
    int nodesInCurrentLevel=1;
    while(!q.empty()&&currentLevel<=level)
    {
        int nodesInNextLevel=0;
        for (int i=0;i<nodesInCurrentLevel;i++)
        {
            Node* node = q.front();
            q.pop();
            if (currentLevel==level)
            {
                result.push_back(node->data);
            }
            if(node->left)
            {
                q.push(node->left);
                nodesInNextLevel++;
            }
            
            if (node->right)
            {
                q.push(node->right);
                nodesInNextLevel++;
            }
        }
        nodesInCurrentLevel=nodesInNextLevel;
        currentLevel++;
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
    int level;
    cin>>level;
    Node *root=builtTree(levelOrder);
    vector<int>result=printNodesAtLevel(root,level);
    if(result.empty())
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}