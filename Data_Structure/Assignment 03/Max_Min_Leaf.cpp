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
void printReverseLevelOrder(Node* root) {
    if (root == NULL)
        return;
    
    queue<Node*> q;
    stack<int> s;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        
        s.push(node->data);
        
        if (node->right)
            q.push(node->right);
        
        if (node->left)
            q.push(node->left);
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
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
    printReverseLevelOrder(root);
    return 0;
}