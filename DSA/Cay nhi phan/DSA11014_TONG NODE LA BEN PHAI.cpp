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

bool isLeaf(node *root){
	return (root->left == NULL && root->right == NULL);
}

int sumLeaf(node *root, bool isRightLeaf){
	if(root == NULL) return 0;
	int res = 0;
	if (isLeaf(root)) {
		if(isRightLeaf) return root->data;
		else return 0;
	}
	res += sumLeaf(root->left, false);// de quy sang trai vi ben trai cung co leaf ben phai
	res += sumLeaf(root->right, true);
	return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
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
		cout << sumLeaf(root, false);
		cout << endl;
    }
}