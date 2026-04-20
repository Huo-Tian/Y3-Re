#include <bits/stdc++.h>
using namespace std;

int n;

string ans(int x) {
    if(x == 1) return "a";
    if(x == 2) return "b";
    return ans(x - 1) + ans(x - 2);
}

int main() {
    cin >> n;
    cout << ans(n);
}