#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
            myLeft=NULL;
        else
            myLeft=new Node(l);
        if(r==-1)
            myRight=NULL;        
        else    
            myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node* root) {
  if (root == NULL) {  // Handle empty tree case
    return;
  }

  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    Node* current = q.front();
    q.pop();

    cout << current->val << " ";  // Print the current node's value

    if (current->left) {  // Add left child if it exists
      q.push(current->left);
    }
    if (current->right) {  // Add right child if it exists
      q.push(current->right);
    }
  }
}
int main()
{
    Node* root=input_tree();
    level_order(root);
    return 0;
}
