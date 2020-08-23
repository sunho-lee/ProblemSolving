#include <iostream>

using namespace std;


int main(){
	int h1 = 0, m1 = 0, s1 = 0;
	int h2 = 0, m2 = 0, s2 = 0;
	int a1 = 0, a2 = 0, ans = 0;

	
	for( int i = 0; i < 3; i++){
		//cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;	
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
		a1 = h1 * 3600 + m1 * 60 + s1;
		a2 = h2 * 3600 + m2 * 60 + s2;
		
		ans = a2 - a1;
		
		//cout << ans / 3600 << ' ' << ans % 3600 / 60 << ' ' << ans % 60 ;
		printf("%d %d %d\n", ans / 3600, ans % 3600 / 60, ans% 60);
	}
	
    

    return 0;

}
