#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    set();
    
    int A[10];
    int sum = 0; 
    for (int i = 1; i <= 9; i++){
        cin >> A[i];
        sum += A[i];
    }

    sort(A+1, A+10);

    for (int i = 1; i <= 8; i++){
        for (int j = i+1; j <= 9; j++){
            if ((sum - A[i] - A[j]) == 100){
                for (int k = 1; k <= 9; k++){
                   if(k == i || k == j) continue;
        
                        cout << A[k] << "\n";
                }            
            }   
        }
    }

return 0;
}