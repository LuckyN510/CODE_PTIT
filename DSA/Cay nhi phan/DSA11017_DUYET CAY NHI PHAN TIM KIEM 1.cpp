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

void insert(node *root, int x){
    if(x < root->data){
        if(root->left == NULL) root->left = new node(x);
        else insert(root->left, x);
    }
    else{
        if(root->right == NULL) root->right = new node(x);
        else insert(root->right, x);
    }
}


void postOrder(node* root){
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        node *root = new node(a[0]);
        for(int i = 1; i < n; i++){
            insert(root, a[i]);
        }
        postOrder(root);
        cout << endl;
    }
}