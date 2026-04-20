#include <bits/stdc++.h>
using namespace std;

int n;
int c[11];//排列

inline void dfs(int x) {
    if(x == n + 1) { //所有都填完了
        for(int i = 1; i <= n; i ++) {
            cout << c[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i ++) { //从第一列开始看
        bool ok = true;
        for(int j = 1; j < x && ok; j ++) {
            if(c[j] == i || (x >= 2 && (i == c[x - 1] - 1 || i == c[x - 1] + 1))) {
                ok = false;
            }
        }
        if(ok) {
            c[x] = i;
            dfs(x + 1);
            c[x] = 0;//回溯
        }
    }
}

int main() {
    cin >> n;
    dfs(1);//dfs从第1行开始
}