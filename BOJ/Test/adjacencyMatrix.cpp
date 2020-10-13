#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;
/* nodes 총 정점 개수
*/ 

int adjacencyMatrix[1001][1001];
int main(){
    int nodes = 4;
    

    //간선을 행렬에 푸시
    adjacencyMatrix[1][2] = 1;
    adjacencyMatrix[2][1] = 1;
    adjacencyMatrix[1][3] = 1;
    adjacencyMatrix[3][1] = 1;
    adjacencyMatrix[1][4] = 1;
    adjacencyMatrix[4][1] = 1;
    adjacencyMatrix[2][4] = 1;
    adjacencyMatrix[4][2] = 1;
    adjacencyMatrix[3][4] = 1;
    adjacencyMatrix[4][3] = 1;

    //출력
    for (int i = 1; i <= nodes; i++){
        for (int j = 1; j <= nodes; j++){
            printf("%d ", adjacencyMatrix[i][j]);    
        }
        printf("\n");
    }

return 0;
}