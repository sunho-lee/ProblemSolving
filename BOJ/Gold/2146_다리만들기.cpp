#include <iostream>
#include <cstring>
#include <queue>
#include <climits>

#define MAX 101
using namespace std;

int N;
int row[] = {-1, 0, 0, 1};
int col[] = {0, -1, 1, 0};
int mat[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];
int island = 0;
int ans = INT_MAX;

bool isValid(int x, int y){
	return (x >= 0 && x < N) && (y >= 0 && y < N);	
} 

void setIslandNum(int x, int y){
	queue<pair<int,int> > q;
	q.push(make_pair(x, y));
	mat[x][y] = island;
	visited[x][y] = true;
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int k = 0; k < 4; k++){
			int nx = x + row[k];
			int ny = y + col[k];
			if(isValid(nx, ny) && mat[nx][ny] == -1 && !visited[nx][ny]){
				mat[nx][ny] = island;
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
			}
		}
	}
}

struct Node{
	int x, y, islandNum;
};

void getLeastDist(int x, int y, int islandNum){
	queue<Node> q;
	q.push({x, y, islandNum});
	visited[x][y] = true;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		int islandNum = q.front().islandNum;
		
		for(int k = 0; k < 4; k++){
			int nx = x + row[k];
			int ny = y + col[k];
			
			if(!isValid(nx, ny)) continue;
			
			if(mat[nx][ny] == islandNum){
				visited[nx][ny] = true;
				continue;	
			}
			
			if(mat[nx][ny] != 0){
				if(ans > dist[x][y]){
					ans = dist[x][y];
				}
			}
			
			if(mat[nx][ny] == 0){
				if(dist[nx][ny] > dist[x][y] + 1){
					dist[nx][ny] = dist[x][y] + 1;
					visited[nx][ny] = true;
				}
			}
			
			
		}
	}
	
	
}

int main(){	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int value;
			scanf("%d", &value);
			if(value == 1) mat[i][j] = -1;
			else mat[i][j] = value;	
			
			dist[i][j] = INT_MAX;
		}
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(!visited[i][j] && mat[i][j] == -1){
				island+=1;
				setIslandNum(i, j);			
			}
		}
	}
    
    
    	for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(!visited[i][j] && mat[i][j] != 0){
					getLeastDist(i, j, mat[i][j]);			
				}
			}
		}
	
	printf("%d", ans);
	
    return 0;
}
