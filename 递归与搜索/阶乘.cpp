#include <bits/stdc++.h>
using namespace std;

int n;

int solve(int x) {
    if(x == 1)
        return 1;
    return solve(x - 1) * x;
}

int main() {
    cin >> n;
    cout << solve(n);
}

//递归