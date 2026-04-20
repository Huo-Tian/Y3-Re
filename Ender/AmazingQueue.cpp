#include <bits/stdc++.h>
using namespace std;

int Test;
int n, m, ans = INT_MAX;
int a[100010], s[100010];

bool cmp(int x, int y) {
    return x > y;
}

int c(int x, int t) {
    for (int i = 1; i <= t; i ++) {
        x /= 2;
    }
    return x;
}
//5 0
//1 2 3 4 5
//5 3
//1 2 3 4 5

int solveing(int x, int y) {
    int suming = INT_MAX;
    for (int i = 0; i <= 29; i ++) {
        suming = min(suming, c(x, i));
    }
    return min(abs(x - y), suming);
}

int main() {
    cin >> Test;
    for(; Test --; ) {
        cin >> n >> m;
        int ma = INT_MIN;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            ma = max(ma, a[i]);
        }
        for(int i = 1; i <= ma; i ++) {
            for(int j = 1; j <= n; j ++) {
                s[j] = solveing(a[j], i);
            }
            sort(s + 1, s + n + 1, cmp);
            for(int j = 1; j <= m; j ++) {
                s[j] = INT_MAX;
            }
            int sum = 0;
            for (int j = 1; j <= n; j ++) {
                sum += s[j];
            }
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
}