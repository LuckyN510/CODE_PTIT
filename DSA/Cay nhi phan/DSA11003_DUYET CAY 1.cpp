#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};


node *buildTree(vector<int> &a, vector<int> &b, int l, int r, int &index) {
    if(l > r) return NULL;
    node *root = new node(b[index]);
    int pos = -1;
    for(int i = l; i <= r; i++){
        if(a[i] == b[index]){
            pos = i;
            break;
        }
    }
    ++index;
    root->left = buildTree(a, b, l, pos - 1, index);
    root->right = buildTree(a, b, pos + 1, r,  index);
    return root;

}

void postOrder(node *root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
        cout << root->data << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        } 
        int index = 0;
        node *root = buildTree(a, b, 0, n - 1, index);
        postOrder(root);
        cout << endl;
    }
}