#include <iostream>
#include <queue>

#define MAX 100000

using namespace std;

int N, K;
bool check[MAX + 1];

struct Node{
	int value;
	int depth;
};


int bfs(Node node, int dest){
	queue<Node> q;
	q.push(node);
	
	while(!q.empty()){
		int value = q.front().value;
		int depth = q.front().depth;
		q.pop();
		check[value] = true;
		
		if(value == dest) return depth;
		
		if((value - 1) >= 0 && !check[value - 1]){
			q.push({value - 1, depth + 1});
		}
		if((value + 1) <= MAX && !check[value + 1]){
			q.push({value + 1, depth + 1});
		}
		if((value * 2) <= MAX && !check[value * 2]){
			q.push({value * 2, depth + 1});
		}
	}
}


int main(){
	cin >> N >> K;
	
	cout << bfs({N, 0}, K);
	
    return 0;
}

