#include <bits/stdc++.h>
using namespace std;

long long n, m, r[5010], b[5010];

int main() {
    srand(time(0));
    n = rand() % 5000 + 1, m = rand() % 5000 + 1;
    cout << n << " " << m << endl;
    for(int i = 1; i <= n; i ++) {
        r[i] = rand() % 1000000000;
        cout << r[i] << " ";
    }
    cout << endl;
    for(int j = 1; j <= m; j ++) {
        b[j] = rand() % 1000000000;
        cout << b[j] << " ";
    }
    cout << endl;
}