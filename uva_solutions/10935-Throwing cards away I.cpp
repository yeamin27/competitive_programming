#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n, i, temp;
    while(scanf("%d", &n) && n != 0)
    {
        for(i = 1; i <= n; ++i)
            q.push(i);
        printf("Discarded cards:");
        while(q.size() >= 2)
        {
            printf(" %d", q.front());
            if(q.size() != 2)
                printf(",");
            q.pop();
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        printf("\nRemaining card: %d\n", q.front());
        q.pop();
    }

    return 0;
}
