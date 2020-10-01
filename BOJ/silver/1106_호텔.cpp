#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int D[1001];
int P[21];//금액
int A[21];//고객 수

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    set();

    int c, n;
    cin >> c >> n;

    for (int i = 1; i <= n; i++){
        int a;
        cin >> P[i];
        cin >> A[i];
    }
    

    for (int i = 1; i <= 1000; i++){
        D[i] = 101;
        for (int j = 1; j <= n; j++){
           // if(i - A[j] >=0){
                D[i] = min(D[i], D[i-A[j]] + P[j]);

                cout<<"i = "<<i<<", j = "<< j <<
                      ", D["<<i<<"] = " << D[i] <<
                     ", A["<<j<<"] = "<< A[j] <<
                      ", P["<<j<<"] = "<< P[j] <<'\n';
           // }
            
        }
        
    }
    
    cout << D[c];


return 0;
}