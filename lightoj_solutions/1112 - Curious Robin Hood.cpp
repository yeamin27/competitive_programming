#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10;

int arr[MAX];
int tree[MAX * 4];

void build(int node, int l, int r)
{
    if(l == r)
    {
        tree[node] = arr[l];
        return;
    }

    int mid = (l + r) >> 1;
    int lf = node << 1;
    int rt = (node << 1) + 1;

    build(lf, l, mid);
    build(rt, mid + 1, r);
    tree[node] = tree[lf] + tree[rt];
}

int query(int node, int l, int r, int L, int R)         // returns result for the range (L, R) inclusive
{
    if(R < l || L > r)
        return 0;

    if(L <= l && r <= R)
        return tree[node];

    int mid = (l + r) >> 1;
    int u = query(node << 1, l, mid, L, R);
    int v = query( (node << 1) + 1, mid + 1, r, L, R);

    return u + v;
}

void update(int node, int l, int r, int idx, int val)    // updates the value of idx'th index with 'val'
{
    if(idx < l || idx > r)
        return;
    
    if(l==r && l==idx)
    {
        tree[node] += val;
        return;
    }    
    
    int lf = node << 1;
    int rt = (node << 1) + 1;
    int mid = (l + r) >> 1;
    
    update(lf, l, mid, idx, val);
    update(rt, mid + 1, r, idx, val);
    
    tree[node] = tree[lf] + tree[rt];
}

int main()
{
    int t, n, q, c, x, y;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; ++tc)
    {
        scanf("%d %d", &n, &q);
        for(int i = 1; i <= n; ++i)
            scanf("%d", &arr[i]);
        
        build(1, 1, n);
        
        printf("Case %d:\n", tc);
        while(q--)
        {
            scanf("%d", &c);
            if(c == 1)
            {
                scanf("%d", &x);
                ++x;
                y = query(1, 1, n, x, x);
                printf("%d\n", y);
                update(1, 1, n, x, -y);
            }
            else if(c == 2)
            {
                scanf("%d %d", &x, &y);
                update(1, 1, n, x+1, y);
            }
            else
            {
                scanf("%d %d", &x, &y);
                printf("%d\n", query(1, 1, n, x+1, y+1));
            }
        }
    }

    return 0;
}
