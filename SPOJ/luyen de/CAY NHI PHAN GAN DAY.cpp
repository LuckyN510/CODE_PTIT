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

node* buildTree(node *root, vector<int> a){
    queue<node*> q;
    q.push(root);
    int index = 1;
    while(index < a.size()){
        node *tmp = q.front(); q.pop();
        if(index < a.size()){
            tmp->left = new node(a[index]);
            ++index;
            q.push(tmp->left);
        }
        if(index < a.size()){
            tmp->right = new node(a[index]);
            ++index;
            q.push(tmp->right);
        }
    }

}

void inOrder(node *root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        node *root = new node(a[0]);
        buildTree(root, a);
        inOrder(root);
        cout << endl;
    }
}