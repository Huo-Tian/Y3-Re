#include <bits/stdc++.h>
using namespace std;

long long n, m, r[5010], b[5010];
long long f[5010][5010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> r[i];
    }
    for(int j = 1; j <= m; j ++) {
        cin >> b[j];
    }
    memset(f, 127, sizeof(f));
    f[0][0] = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + abs(r[i] - b[j]);
        }
    }
    cout << f[n][m];
}