#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int h, w;
queue<pair<int, int>> q;
int row[] = {-1, 0, 0, 1};
int col[] = {0, -1, 1, 0};
int ans = 0;
int mat[1000][1000];
int day[1000][1000];

bool isValid(int x, int y){
    return (x < h && x >= 0) && (y < w && y >=0);
}

int main(){
    scanf("%d %d", &w, &h);

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            scanf("%d", &mat[i][j]);

            day[i][j] = -1;

            if(mat[i][j] == 1){
                q.push(make_pair(i, j));
                day[i][j] = 0;
            }             
        }
    }
    
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++){
            int nx = x + row[k];
            int ny = y + col[k];
            if(isValid(nx, ny) && mat[nx][ny] == 0 && day[nx][ny] == -1){
                day[nx][ny] = day[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (ans < day[i][j]) {
                ans = day[i][j];
            }
        }
    }

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (mat[i][j] == 0 && day[i][j] == -1) {
                ans = -1;
            }
        }
    }

    printf("%d\n", ans);

return 0;
}