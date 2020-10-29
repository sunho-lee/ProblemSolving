#include <iostream>
#include <cstring>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int w, h;
int row[] = {-1, 0, 0, 1, -1, -1, 1, 1};
int col[] = {0, -1, 1, 0, -1, 1, -1, 1};
int mat[50][50];
bool visited[50][50];
int island;

bool isValid(int x, int y){
	return (x >= 0 && x < h) && (y >= 0 && y < w);	
} 

void bfs(int x, int y){
	queue<pair<int,int> > q;
	
	q.push(make_pair(x, y));
	
	visited[x][y] = true;
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int k = 0; k < 8; k++){
			int nx = x + row[k];
			int ny = y + col[k];
			if(isValid(nx, ny) && mat[nx][ny] == 1 && !visited[nx][ny]){
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
			}
		}
	}
}

int main(){	
	while(true){
		scanf("%d %d", &w, &h);
		
		if(w == 0 || h == 0) break;
		
		memset(visited, false, sizeof(visited));
		memset(mat, 0, sizeof(mat));
		island = 0;
	
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				scanf("%d", &mat[i][j]);	
			}
		}

		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(!visited[i][j] && mat[i][j] == 1){
					bfs(i, j);			
					island+=1;
				}
			}
		}
        
		printf("%d\n", island);
        
	}
    return 0;
}
