#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 1;

int main() {
    cin >> n;
    for(int i = 1/*这里写i = 2也是没有错的*/; i <= n; i ++) {
        ans *= i;
    }
    cout << ans << endl;
}