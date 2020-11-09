#include <iostream>
#include <queue>
#include <stack>

#define MAX 100000

using namespace std;

int N, K;
bool check[MAX + 1];

struct Node{
	int value;
	int sec;
};

int bfs(Node node, int dest){
	queue<Node> q;
	q.push(node);
	
	while(!q.empty()){
		int value = q.front().value;
		int sec = q.front().sec;
		q.pop();
		
		if(value == dest) return sec;
		
        if((value * 2) <= MAX && !check[value * 2]){
                check[value * 2] = true;
			    q.push({value * 2, sec});
		}

		if((value - 1) >= 0 && !check[value - 1]){
                check[value - 1] = true;
			    q.push({value - 1, sec + 1});
		}

		if((value + 1) <= MAX && !check[value + 1]){
                check[value + 1] = true;
			    q.push({value + 1, sec + 1});
		}

	}
    return 0;
}

int main(){
	cin >> N >> K;
	
	cout << bfs({N, 0}, K) << '\n';
	
    return 0;
}

