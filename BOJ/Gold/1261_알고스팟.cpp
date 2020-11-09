#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>

#define MAX 100

using namespace std;

int h, w;
int col[] = {1, 0, -1, 0};
int row[] = {0, 1, 0, -1};
int mat[MAX + 1][MAX + 1];
int dist[MAX + 1][MAX + 1];

bool isVaild(int x, int y){
    return (x >= 0 && x < h) && ( y >= 0 && y < w);
}

struct Node
{
    int x, y;
};


void bfs(){
    queue<Node> q;
    q.push({0, 0});
    dist[0][0] = 0;

    while (!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        for (int k = 0; k < 4; k++){
            int next_x = x + col[k];
            int next_y = y + row[k];

            if(!isVaild(next_x, next_y)) continue;

                if(mat[next_x][next_y] == 0){
                    if(dist[next_x][next_y] > dist[x][y]){
                        dist[next_x][next_y] = dist[x][y];
                        q.push({next_x, next_y});
                    }

                }else if(mat[next_x][next_y] == 1){

                    if(dist[next_x][next_y] > dist[x][y] + 1){
                        dist[next_x][next_y] = dist[x][y] + 1;
                        q.push({next_x, next_y});
                    }
                }
        }
    }
}

int main(){
    scanf("%d %d", &w, &h);

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            scanf("%1d", &mat[i][j]);
            dist[i][j] = INT_MAX;
        }
    }
    
    bfs();
    printf("%d\n", dist[h-1][w-1]);
return 0;
}