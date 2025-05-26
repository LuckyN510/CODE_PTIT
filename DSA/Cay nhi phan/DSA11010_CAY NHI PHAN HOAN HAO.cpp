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

int heightTree(node *root){
    if(root == NULL) return 0;
    return 1 + max(heightTree(root->left), heightTree(root->right));
}

bool checkLeaf(node *root, int currentNode, int heightTree){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL){
        if(currentNode == heightTree){
            return true;
        }
        else{
            return false;
        }
    }
    return checkLeaf(root->left, currentNode + 1, heightTree) && checkLeaf(root->right, currentNode + 1, heightTree);
}

bool checkIntermediateNode(node *root){
    if(root == NULL) return true;
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)){
        return false;
    }  
    return checkIntermediateNode(root->left) && checkIntermediateNode(root->right);
}
// cach 2
// bool check(node *root){
//     queue<node*> q;
//     q.push(root);
//     int cnt = 0;
//     while(!q.empty()){
//         int s = q.size();
//         if(s != pow(2, cnt)) return false;
//         for(int i = 0; i < s; i++){
//             node *tmp = q.front();
//             q.pop();
//             if(tmp->left != NULL) q.push(tmp->left);
//             if(tmp->right != NULL) q.push(tmp->right);
//         }
//         ++cnt;
//     }
//     return true;
// }

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
        int height = heightTree(root);
        if(checkLeaf(root, 1, height) && checkIntermediateNode(root)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n"; 

        }
    }
}