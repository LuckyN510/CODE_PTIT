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

void makeRoot(node *root, int v, char c) {
    if (c == 'L') root->left = new node(v);
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

int maxn ;

int findMax(node *root){
    if(root == NULL){
        return 0;
    }
    // Nếu là lá
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    int L = findMax(root->left);
    int R = findMax(root->right);
    if(root->left != NULL && root->right != NULL){
        maxn = max(maxn, L + R + root->data);
        return max(L, R) + root->data;
    }
    else{
        return (root->left != NULL ? L : R) + root->data;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int u, v;
			char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeRoot(root, v, c);
			}
			else{
				insertRoot(root, u, v, c);
			}
		}
        maxn = -1e9;
        findMax(root);
        cout << maxn << endl;

    }
}