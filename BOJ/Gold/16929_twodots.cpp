#include <iostream>

using namespace std;
int h, w;
char mat[50][50];
bool visited[50][50];
int row[] = {0, 1, 0, -1};
int col[] = {1, 0, -1, 0};
int count = 0;

struct Node{
    int x, y;
    char v;
};

bool isVaild(int x, int y){
    return (x >= 0 && x < h) && (y >= 0 && y < w);
}

void dfs(Node src, int dest_x, int dest_y){
visited[src.x][src.y] = true;

    for (int k = 0; k < 4; k++){
        int nx = src.x + row[k];
        int ny = src.y + col[k];

        if(count >= 3 && nx == dest_x && ny == dest_y){
           // cout << "YES, count = " << count <<'\n';
          //  cout << "YES" << " x = " << src.x <<" y = " << src.y<< '\n';
          //  cout << "YES" << " nx = " << nx <<" ny = " << ny<< '\n';
            cout << "YES" << '\n';
            exit(0);
            }

        if(isVaild(nx, ny) && !visited[nx][ny] && mat[nx][ny] == src.v){
            count = count + 1;
           // cout << "count : " << count << '\n';
           // cout << "" << "x = " << src.x <<", y = " << src.y<< '\n';
           // cout << "" << "nx = " << nx <<", ny = " << ny<< '\n';
           // cout << '\n';

            dfs({nx, ny, src.v}, dest_x, dest_y);
        }
    
    }
    
    
    
    

}

int main(){
    cin >> h >> w;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if(!visited[i][j]){
                dfs({i,j,mat[i][j]}, i, j);
            }
        }
    }
    
    cout << "NO";

    /*
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << visited[i][j] << " ";
        }
        cout << '\n';
    }
      */


return 0;
}