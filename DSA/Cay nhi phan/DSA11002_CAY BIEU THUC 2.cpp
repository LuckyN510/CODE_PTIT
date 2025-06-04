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

node *buildTree(vector<string> s, int index){
    if(index >= s.size()){
        return NULL;
    }
    node *root = new node(s[index]);
    root->left = buildTree(s, 2 * index + 1);
    root->right = buildTree(s, 2 * index + 2);
    return root;
}


int calc(node *root){
    if(root->left == NULL && root->right == NULL){
        return stoi(root->data);
    }
    int leftValue = calc(root->left);
    int rightValue = calc(root->right);
    if(root->data == "+") return leftValue + rightValue;
    else if(root->data == "-") return leftValue - rightValue;
    else if(root->data == "*") return leftValue * rightValue;
    else if(root->data == "/") return leftValue / rightValue; 
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        node *root = buildTree(s, 0);
        cout << calc(root) << endl;
    }
}