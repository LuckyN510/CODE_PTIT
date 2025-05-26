#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c){
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertRoot(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->data == u){
        makeRoot(root, v, c);
    }
    else{
        insertRoot(root->left, u, v, c);
        insertRoot(root->right, u, v, c);
    }
}

int heightTree(node *root){
    if(root == NULL) return 0;
    return 1 + max(heightTree(root->left), heightTree(root->right));
}

bool isLeaf(node *root){
    return (root->left == NULL && root->right == NULL);
}

bool check(node *root, int currentNodeTree, int heightTree){
    if(root == NULL) return true;
    if(isLeaf(root)){
        if(currentNodeTree == heightTree){
            return true;
        }
        else{
            return false;
        }
    }
    return check(root->left, currentNodeTree + 1, heightTree) && check(root->right, currentNodeTree + 1, heightTree);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        node *root = NULL;
        for(int i = 0; i < n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(root == NULL){
                root = new node(u);
                makeRoot(root, v, c);
            }
            else{
                insertRoot(root, u, v, c);
            }
        }
        int h = heightTree(root);
        cout << check(root, 1, h) << endl;

    }   
}