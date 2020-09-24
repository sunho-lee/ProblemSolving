#include <iostream>
#include <iomanip>
#include <stack>
#include <string>
using namespace std;
int operand[26];
int main() {
    int n;
    cin >> n;
    string postfix;
    cin >> postfix;
    for (int i=0; i<n; i++) {
        cin >> operand[i];
    }
    stack<double> s;
    for (char ch : postfix) {
        if (ch >= 'A' && ch <= 'Z') {
            s.push((double)operand[ch-'A']);
        } else {
            double op2 = s.top(); s.pop();
            double op1 = s.top(); s.pop();
            if (ch == '+') {
                s.push(op1+op2);
            } else if (ch == '-') {
                s.push(op1-op2);
            } else if (ch == '*') {
                s.push(op1*op2);
            } else if (ch == '/') {
                s.push(op1/op2);
            }
        }
    }
    cout << fixed << setprecision(2) << s.top() << '\n';
    return 0;
}
