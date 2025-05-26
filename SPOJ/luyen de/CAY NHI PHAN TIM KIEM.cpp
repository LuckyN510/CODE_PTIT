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

node* insert(node* root, int val) {
    if (root == NULL) return new node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);
    return root;
}

node* minNode(node *root){
    node *tmp = root;
    while(tmp != NULL && tmp->left != NULL){
        tmp = tmp->left;
    }
    return tmp;
}

node* deleteNode(node *root, int key){
    if(root == NULL) return root;
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }
    else{
        if(root->left == NULL){
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL){
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        else{
            node *tmp = minNode(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right, tmp->data);       
        }
    }
    return root;
}

void inOrder(node *root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root){
    if(root == NULL) return;
    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}


void postOrder(node *root){
    if(root == NULL) return;
    inOrder(root->left);
    inOrder(root->right);
     cout << root->data << " ";
}



int main(){
    node *root = NULL;
    while(1){
        int n; cin >> n;
        if(n == 1){
            int m; cin >> m;
            root = insert(root, m);
        }
        else if(n == 2){
            int x; cin >> x;
            deleteNode(root, x);
        }
        else if(n == 3){
            preOrder(root);
            cout << endl;
        }
        else if(n == 4){
            inOrder(root);
            cout << endl;
        }
        else if(n == 5){
            postOrder(root);
            cout << endl;
        }
        else{
            break;
        }
    }
}