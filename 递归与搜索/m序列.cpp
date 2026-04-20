#include <bits/stdc++.h>
using namespace std;

int n, c[1000010], m;

inline void dfs(int i) {
    if(i != 1) { //终止条件
        for(int j = 1; j <= i - 1; j ++) {
            cout << c[j] << " ";
        }
        cout << endl;
    }
    if(i == n + 1) 
        return;
    for(int j = 1; j <= m; j ++) {        
        c[i] = j;
        dfs(i + 1);
    }
}

int main() {
    cin >> n >> m;
    dfs(1);
}