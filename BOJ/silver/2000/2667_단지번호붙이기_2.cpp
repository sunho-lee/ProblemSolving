#include <iostream>
#include <cstring>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int n;
int row[] = {-1, 0, 0, 1};
int col[] = {0, -1, 1, 0};
int mat[25][25];
bool visited[25][25];
int cnt = 0;

bool isValid(int i, int j){
	return (i >= 0 && i < n) && (j >= 0 && j < n);	
} 

void bfs(int a, int b, int cnt){
	queue<pair<int,int> > q;
	
	q.push(make_pair(a, b));
	
	visited[a][b] = true;
	mat[a][b] = cnt;
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int k = 0; k < 4; k++){
			int nx = x + row[k];
			int ny = y + col[k];
			if(isValid(nx, ny) && mat[nx][ny] == 1 && !visited[nx][ny]){
				mat[nx][ny] = cnt;
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
			}
		}
	}
}

int main(){	
	scanf("%d", &n);
	
	memset(visited, false, sizeof(visited));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%1d", &mat[i][j]);	
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j] && mat[i][j] == 1){
				cnt+=1;
				bfs(i, j, cnt);			
			}
		}
	}
	
    vector<int> ans;
	for(int t = 0; t < cnt; t++){
		int value = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(t+1 == mat[i][j]){
					value += 1;
				}
			}
		}
		ans.push_back(value);
	}
	
	sort(ans.begin(), ans.end());
	
	printf("%d\n", cnt);
	for(int i = 0; i < cnt; i++){
		printf("%d\n", ans[i]);
	}

    return 0;
}

