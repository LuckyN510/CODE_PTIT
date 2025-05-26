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

void spiral_order(node *root){
    stack<node*> st1, st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node *top = st1.top(); st1.pop();
            cout << top->data << " ";
            if(top->right != NULL){
                st2.push(top->right);
            }
            if(top->left != NULL){
                st2.push(top->left);
            }
        }
        while(!st2.empty()){
            node *tmp = st2.top(); st2.pop();
            cout << tmp->data << " ";
            if(tmp->left != NULL){
                st1.push(tmp->left);
            }
            if(tmp->right != NULL){
                st1.push(tmp->right);
            }
        }
    } 
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        node *root = NULL;
        map<int, node*> mp;
        for(int i = 0; i < n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(!mp.count(u)){
                root = new node(u);
                mp[u] = root;
            }
            node *parent = mp[u];
            node *child = new node(v);
            if(c == 'L') parent->left = child;
            else parent->right = child;
            mp[v] = child;
        }
        spiral_order(root);
        cout << endl;
    }
}