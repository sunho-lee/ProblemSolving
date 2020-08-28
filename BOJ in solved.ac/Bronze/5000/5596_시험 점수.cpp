#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	int x = 0;
	int s = 0;
	int t = 0;
//	cout << "x, s, t \-\> " << x << ' ' << s << ' ' << t << '\n';
	
	for(int i = 0; i < 8; i++){
		cin >> x;
		if(i < 4) s += x;	
		else{
		//	cout << "t \- " << t << '\n';
			t += x;	
		//	cout << " t\+\=x \-\> " << t << '\n';
		} 
	}
	
	
	
	//cout << s << ' ' << t << '\n';
	
	if(s > t){
		cout << s;
	}else{
		cout << t;
	}
	
	
	
return 0;
}

