#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int function(int n){

	return 0;
}

int t;
int n,m;
int cnt;
int main(){
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	
	for(int k = 1; k<=t; k++){
		cin >> n >> m;
		cnt = 0;	
		for(int i = 1; i<=n-2; i++){
			for(int j = i+1; j<=n-1; j++){
				int v = i*i+j*j+m;
				if( v/(i*j) > 0){
					cout << "i = " << i << ", j = "<< j <<",  " <<((i*i+j*j+m)/(i*j)) <<  '\n';	
					//cnt +=1;
				} 
			}
		}
		cout << '\n';
	}
	
	

    return 0;

}

