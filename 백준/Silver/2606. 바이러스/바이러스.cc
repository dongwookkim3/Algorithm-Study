#include <queue>
#include <iostream>
#include <vector>

using namespace std;


vector<int> v[101];
bool visited[101];

void bfs(int a){
	queue<int> q;
	q.push(a);
	visited[a]=1;
	while(!q.empty()){
		a=q.front();
		for (int i=0;i<v[a].size();i++){
			int next = v[a][i];
			if (visited[next]==0){
				q.push(next);
				visited[next]=1;
			}
		}
		q.pop();
	}
}

int main(){
	int n,m,result=0;
	cin >> n >> m;
	while(m--){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);
	for (int i=1;i<=n;i++){
		if (visited[i]==1) result++;
	}
	cout << --result;
	return 0;
}