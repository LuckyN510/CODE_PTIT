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

bool check(node *root1){
    if(root1 == NULL) return true;
    if(root1->left == NULL && root1->right == NULL) return true;
    if(root1->left != NULL && root1->right != NULL){
            return check(root1->left) && check(root1->right);
    }
    return false; 
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        node *root1 = NULL;
        for(int i = 0; i < n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(root1 == NULL){
                root1 = new node(u);
                makeRoot(root1, v, c);
            }
            else{
                insertRoot(root1, u, v, c);
            }
        }
        cout << check(root1) << endl;
    }   
}