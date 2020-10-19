#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;
/*  nodes 총 정점 개수
    출력 : 각 노드에 연결된 모든 노드를 출력한다.
*/
vector<int> adjancencyList[1001];
int main(){
    int nodes = 4;

    //간선 리스트에 푸시
    adjancencyList[1].push_back(2);
    adjancencyList[2].push_back(1);
    adjancencyList[1].push_back(3);
    adjancencyList[3].push_back(1);
    adjancencyList[1].push_back(4);
    adjancencyList[4].push_back(1);
    adjancencyList[2].push_back(4);
    adjancencyList[4].push_back(2);
    adjancencyList[3].push_back(4);
    adjancencyList[4].push_back(3);

    //간선 정렬
    for (int i = 1; i <= nodes; i++){
        sort(adjancencyList[i].begin(), adjancencyList[i].end());
    }

    //출력
    for (int i = 1; i <= nodes; i++){
        printf("current node = %d, adjacency node = ", i);
        for (int j = 0; j < adjancencyList[i].size(); j++){
            printf("%d ", adjancencyList[i][j]);    
        }
        printf("\n");
    }

return 0;
}