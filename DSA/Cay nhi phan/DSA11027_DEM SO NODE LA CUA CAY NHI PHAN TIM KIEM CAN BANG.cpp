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

node* buidTree(int a[], int l, int r){
    if(l > r) return NULL;
    int m = (l + r) / 2;
    node* root = new node(a[m]);
    root->left = buidTree(a, l, m - 1);
    root->right = buidTree(a, m + 1, r);
    return root;
}

int cnt ;
void InLa(node *root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) {
        ++cnt;
    }
    InLa(root->left);
    InLa(root->right);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        
        node *root = buidTree(a, 0, n - 1);
        cnt = 0;
        InLa(root);
        cout << cnt << endl;
    }
}