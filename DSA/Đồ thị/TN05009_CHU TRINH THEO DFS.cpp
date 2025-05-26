#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void nhap(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
		visited[i] = false;
		parent[i] = -1;
	}
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

bool DFS(int u){
	cout << u << " ";
	visited[u] = true;
	for(int x : adj[u]){
		if(!visited[x]){
			parent[x] = u;
			if(DFS(x){
				return true;
			}
		}
		else if(x != parent[u]){
			return true;
		}
	}
	return false;
}
 
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		DFS(1);
	}
}