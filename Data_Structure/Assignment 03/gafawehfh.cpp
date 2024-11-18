#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumOfBinaryTree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    
    queue<Node*> q;
    q.push(root);
    int totalsum = 0;
    
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        totalsum += node->data;
        
        if (node->left) {
            q.push(node->left);
        }
        
        if (node->right) {
            q.push(node->right);        
        }
    }
    
    return totalsum;
}

Node* builtTree(string levelOrder) {
    stringstream ss(levelOrder);
    string val;
    queue<Node*> nodeQueue;
    Node* root = NULL;
    
    if (getline(ss, val, ' ')) {
        if (val != "-1") {
            int rootVal = stoi(val);
            root = new Node(rootVal);
            nodeQueue.push(root);
        }
    }
    
    while (!nodeQueue.empty()) {
        Node* currNode = nodeQueue.front();
        nodeQueue.pop();
        if (getline(ss, val, ' ')) {
            if (val != "-1") {
                int leftVal = stoi(val);
                currNode->left = new Node(leftVal);
                nodeQueue.push(currNode->left);
            }
        }
        
        if (getline(ss, val, ' ')) {
            if (val != "-1") {
                int rightVal = stoi(val);
                currNode->right = new Node(rightVal);
                nodeQueue.push(currNode->right);
            }
        }
    }
    
    return root;
}

int main() {
    string levelOrder;
    getline(cin, levelOrder);
    
    Node* root = builtTree(levelOrder);
    int sum = sumOfBinaryTree(root);
    cout << sum << endl;
    
    return 0;
}