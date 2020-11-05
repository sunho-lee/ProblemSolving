#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int n;
int row[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int col[] = {-1, -2, -2, -1, 1, 2, 2, 1};

bool isValid(int x, int y){
    if(x < 0 || y < 0 || x >=n || y >= n)
        return false;

    return true;
}

struct Node{
    int x, y, dist;

    Node(int x, int y, int dist = 0): x(x), y(y), dist(dist) {}

    bool operator<(const Node& o) const{
        return x < o.x || (x == o.x && y < o.y);
    }
};

int bfs(Node src, Node dest){
    set<Node> visited;
    queue<Node> q;
    q.push(src);

    while (!q.empty()){
        Node node = q.front();
        q.pop();

        int x = node.x;
        int y = node.y;
        int dist = node.dist;

        if(x == dest.x && y == dest.y){
            return dist;
        }

        if(!visited.count(node)){
            visited.insert(node);

            for (int k = 0; k < 8; k++){
                int nx = x + row[k];
                int ny = y + col[k];
                if (isValid(nx, ny)){
                    q.push({nx, ny, dist + 1});
                }
            }
            
        }

    }
    return -1;    
}

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> n;
        Node src = {0, 0};
        Node dest = {0, 0};
        cin >> src.x >> src.y >> dest.x >> dest.y;
        cout << bfs(src, dest) << '\n';
    }

return 0;
}