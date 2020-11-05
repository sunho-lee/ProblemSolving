#include <iostream>
#include <queue>
#include <stack>

#define MAX 100000

using namespace std;

int N, K;
bool check[MAX + 1];
int arr[MAX + 1];

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
		
		if(value == dest) return depth;
		
		if((value - 1) >= 0 && !check[value - 1]){
                check[value - 1] = true;
                arr[value - 1] = value;
			    q.push({value - 1, depth + 1});
		}

		if((value + 1) <= MAX && !check[value + 1]){
                check[value + 1] = true;
                arr[value + 1] = value;
			    q.push({value + 1, depth + 1});
		}

		if((value * 2) <= MAX && !check[value * 2]){
                check[value * 2] = true;
                arr[value * 2] = value;
			    q.push({value * 2, depth + 1});
		}

	}
    return 0;
}

void output(int N, int K){
	stack<int> s;
	s.push(K);
	
	int v = K;

	while(v != N){
		s.push(arr[v]);
        v = arr[v];
	}
	
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	
}

int main(){
	cin >> N >> K;
	
	cout << bfs({N, 0}, K) << '\n';
	output(N, K);
	
	
    return 0;
}

