#include <bits/stdc++.h>
using namespace std;

int n;

int solve(int x) {
    if(x <= 1) {
        return 1;
    }
    return solve(x - 1) + solve(x - 2);
}

int main() {
    cin >> n;
    cout << solve(n);
}