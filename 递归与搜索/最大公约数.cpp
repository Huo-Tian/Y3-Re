#include <bits/stdc++.h>
using namespace std;

int test, a, b;

int gcd(int x, int y) {
    if(!y) return x;
    return gcd(y, x % y); 
}

int main() {
    cin >> test;
    for(; test--; ) {
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
}