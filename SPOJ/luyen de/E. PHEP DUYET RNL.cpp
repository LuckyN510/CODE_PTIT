#include<bits/stdc++.h>

using namespace std;

struct node{
    string data;
    node *left, *right;
    node(string x){
        data = x;
        left = right = NULL;
    }
};

node* buildTree(vector<string> &v){
    node *root = new node(v[0]);
    queue<node*> q;
    q.push(root);
    int index = 1;
    while(index < v.size()){
        node *tmp = q.front(); q.pop();
        if(index < v.size() && v[index] != "N"){
            tmp->left = new node(v[index]);
            q.push(tmp->left);
        }
        ++index;
        if(index < v.size() && v[index] != "N"){
            tmp->right = new node(v[index]);
            q.push(tmp->right);
        }
        ++index;
    }
    return root;
}

void rightNodeLeft(node *root){
    if(root == NULL) return;
    rightNodeLeft(root->right);
    cout << root->data << " ";
    rightNodeLeft(root->left);
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        node *root = buildTree(v);
        rightNodeLeft(root);
        cout << endl;
    }
}