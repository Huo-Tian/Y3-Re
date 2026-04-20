#include <bits/stdc++.h>
using namespace std;

int n;

int solve(int x) {
    if(x <= 1) {
        return 1;
    }
    return solve(x - 2) + solve(x - 1);
}

int main() {
    cin >> n;
    cout << solve(n);
}