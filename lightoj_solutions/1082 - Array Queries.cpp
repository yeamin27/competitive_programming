#include<bits/stdc++.h>
using namespace std;

int arr[1000000], seg[2000010];

int init(int node, int left, int right)
{
    if(left == right)
        return seg[node] = arr[left];

    int mid = (left + right) / 2;

    seg[node] = min(init(node*2, left, mid), init(node*2+1, mid+1, right));
    return seg[node];
}

int query(int node, int left, int right, int lq, int rq)
{
    if(lq > right || rq < left)
        return 1000000;

    if(left >= lq && right <= rq)
        return seg[node];

    int mid = (left+right) / 2;
    return min(query(node*2, left, mid, lq, rq), query(node*2+1, mid+1, right, lq, rq));
}

int main()
{
    int t, n, q, x, y;
    scanf("%d", &t);
    for(int c = 1; c <= t; ++c){
        scanf("%d %d", &n, &q);

        for(int i = 1; i <= n; ++i)
            scanf("%d", &arr[i]);

        printf("Case %d:\n", c);
        init(1, 1, n);
        for(int i = 0; i < q; ++i)
        {
            scanf("%d %d", &x, &y);
            printf("%d\n", query(1, 1, n, x, y));
        }
    }

    return 0;
}

