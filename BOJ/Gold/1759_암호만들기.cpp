#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void set(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool check(string &password) {
    int ja = 0;
    int mo = 0;
    for (char x : password) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            mo += 1;
        } else {
            ja += 1;
        }
    }
    return ja >= 2 && mo >= 1;
}

void Function(int index, int length, vector<char> &A, string password) {
    
    if(password.length() == length){
        if(check(password)){
            cout << password << '\n';
        }
        return;
    }

    if(index == A.size()+1) return;
    Function(index+1, length, A, password + A[index]);
    Function(index+1, length, A , password);
}

int main(){
    set();

    int L, C;
    cin >> L >> C;

    vector<char> A(C);

    for (int i = 1; i <= C; i++){
        cin >> A[i];
    }
    sort(A.begin()+1, A.end()+1 );

    Function(1, L, A, "");

return 0;
}