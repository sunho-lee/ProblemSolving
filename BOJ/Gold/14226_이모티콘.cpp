#include <iostream>
#include <queue>

#define MAX 1000

using namespace std;

int S;
bool visited[MAX + 1][MAX + 1];

struct Node{
	int value, sec, clip;
};

int bfs(int start, int end){
	queue<Node> q;
	q.push({start, 0, 0});
	visited[start][0] = true;
	
	while(!q.empty()){
		int current_v = q.front().value;
		int current_s = q.front().sec;
		int current_c = q.front().clip;
		q.pop();
		
		if(current_v == end) return current_s;
				
		if((current_v + current_c) <= MAX && current_c > 0 && !visited[current_v + current_c][current_c]){
			visited[current_v + current_c][current_c] = true;
			q.push({current_v + current_c, current_s + 1, current_c});
		}
		
		if((current_v - 1) >= 1 && !visited[current_v - 1][current_c]){
			visited[current_v - 1][current_c] = true;
			q.push({current_v - 1, current_s + 1, current_c});
		}

		if(current_v != current_c){
			q.push({current_v, current_s + 1, current_v});	
		} 
	
	}
	return 0;
}

int main(){
	cin >> S;

	cout << bfs(1, S);

    return 0;

}

