#include <bits/stdc++.h>
using namespace std;

struct Tree {
    int v;
    int l, r, f;
}a[100010];
int root;
vector<int> c;

//先序遍历(前序遍历) Pre-（前面） Order(点)
//根左右
inline void PreOrder(int p) {
    c.push_back(p);
    if(a[p].l) PreOrder(a[p].l);
    if(a[p].r) PreOrder(a[p].r);
}

PreOrder(root);
//    1
//  2   3
// 4 5 6 7
//1245367

//中序遍历 In 在中间 Order 点
//左根右
inline void InOrder(int p) {
    if(a[p].l) PreOrder(a[p].l);
    c.push_back(p);
    if(a[p].r) PreOrder(a[p].r);
}
//    1
//  2   3
// 4 5 6 7
//4251637

//后序遍历 Post 在后面 Order 点
inline void