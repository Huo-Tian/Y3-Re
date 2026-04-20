#include <bits/stdc++.h>
using namespace std;

int n, c[1000010];

inline void dfs(int i) {
    if(i == n + 1) { //终止条件
        for(int j = 1; j <= n; j ++) {
            cout << c[j];
        }
        cout << endl;
        return;
    }
    c[i] = 0;
    dfs(i + 1);
    c[i] = 1;
    dfs(i + 1);
}

int main() {
    cin >> n;
    dfs(1);
}