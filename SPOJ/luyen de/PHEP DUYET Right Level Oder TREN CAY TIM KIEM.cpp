#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void insert(Node *root, int x){
    if(x < root->data){
        if(root->left == NULL) root->left = new Node(x);
        else insert(root->left, x);
    }
    else{
        if(root->right == NULL) root->right = new Node(x);
        else insert(root->right, x);
    }
}


void rightLevelOrder(Node *root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int lv = q.size();
        vector<int> cur;
        for(int i = 0; i < lv; i++){
            Node* current = q.front();
            q.pop();
            cur.push_back(current->data);
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        for(int i = cur.size() - 1; i >= 0; i--){
            cout << cur[i] << " ";
        }
    }
}

int main(){
    int t, n, i, a[10005];
    cin >> t;
    while(t--){
        Node* root = NULL;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0) root = new Node(a[i]);
            else insert(root, a[i]);
        }
        
        rightLevelOrder(root);
        cout << endl;
    }
    return 0;
}

