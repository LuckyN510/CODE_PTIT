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

node *buildTree(vector<int> &in, vector<int> &level, int l, int r) {
    if(l > r) return NULL;
    int rootVal = -1, pos = -1;
    for(int i = 0; i < level.size(); i++) {
        for(int j = l; j <= r; j++) {
            if(level[i] == in[j]) {
                rootVal = level[i];
                pos = j;
                break;
            }
        }
        if(rootVal != -1) break;
    }
    if(rootVal == -1) return NULL;
    node *root = new node(rootVal);
    root->left = buildTree(in, level, l, pos - 1);
    root->right = buildTree(in, level, pos + 1, r);
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
        vector<int> in(n);
        for(int i = 0; i < n; i++) {
            cin >> in[i];
        }
        vector<int> level(n);
        for(int i = 0; i < n; i++) {
            cin >> level[i];
        }
        node *root = buildTree(in, level, 0, n - 1);
        postOrder(root);
        cout << endl;
    }
}