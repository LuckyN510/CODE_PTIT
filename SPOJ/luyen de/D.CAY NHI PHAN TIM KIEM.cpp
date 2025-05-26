#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left, *right;
    node (int x){
        data = x;
        left = right = NULL;
    }
};

void insert(node *root, int x){
    if(x < root->data){
        if(root->left != NULL) insert(root->left, x);
        else root->left = new node(x); 
    }
    else{
        if(root->right != NULL) insert(root->right, x);
        else root->right = new node(x);
    }
}


void postOrder(node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main(){
    int test; cin >> test;
    for(int t = 1; t <= test; t++){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        node *root = new node(a[0]);
        for(int i = 1; i < n; i++){
            insert(root, a[i]);
        }
        cout << "Test #"<< t << ": ";
        postOrder(root);
        cout << endl;
    }
}