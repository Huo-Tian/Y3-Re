#include <bits/stdc++.h>
using namespace std;

const int N = 100009;
int Test;
int n;
vector<int> edges[N + 1];
int deep[N + 1], sontree[N + 1];

inline void dfs(int x) {
    for (auto y : edges[x]) {
        deep[y] = x + 1;
        dfs(y);
    }
    return;
}

int main() {
    cin >> Test;
    for (; Test --; ) {
        cin >> n;
        for (int i = 1; i < n; i ++) {
            int x, y;
            cin >> x >> y;
            edges[x].push_back(y);
            sontree[x] ++;#include <bits/stdc++.h>
            using namespace std;

            const int N = 100009;
            int Test;
            int n;
            vector<int> edges[N + 1];
            int deep[N + 1], sontree[N + 1];

            inline void dfs(int x) {
                sontree[x] += edges[x].size();

                for (auto y : edges[x]) {
                    deep[y] = deep[x] + 1;
                    dfs(y);
                    sontree[x] += sontree[y];
                }
                return;
            }

            int main() {
                cin >> Test;
                for (; Test --; ) {
                    cin >> n;
                    for (int i = 1; i < n; i ++) {
                        int x, y;
                        cin >> x >> y;
                        edges[x].push_back(y);
                    }
                    deep[1] = 1;
                    dfs(1);
                    for (int i = 1; i <= n; i ++) {
                        cout << deep[i] << " " << n - sontree[i] << endl;
                    }
                }
            }
        }
        deep[1] = 1;
        dfs(1);
        for (int i = 1; i <= n; i ++) {
            cout << deep[i] << " " << n - sontree[i] << endl;
        }
    }
}