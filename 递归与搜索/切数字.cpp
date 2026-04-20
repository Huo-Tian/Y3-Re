#include <bits/stdc++.h>
using namespace std;

int n;

int solve(int x) {
    if(x == 1) {
        return 0;
    }
    return x + solve(x / 2) + solve(x - x / 2);
} 

int main() {
    cin >> n;
    cout << solve(n);
}