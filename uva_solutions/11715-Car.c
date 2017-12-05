#include<stdio.h>
#include<math.h>
int main()
{
    int n, c = 1;
    float a, u, v, s, t;
    while(scanf("%d", &n) && n != 0)
    {
        if(n == 1)
        {
            scanf("%f %f %f", &u, &v, &t);
            a = (v - u) / t;
            s = (u * t) + (0.5 * a * t * t);
            printf("Case %d: %.3f %.3f\n", c, s, a);
        }
        else if(n == 2)
        {
            scanf("%f %f %f", &u, &v, &a);
            t = (v - u) / a;
            s = (u * t) + (0.5 * a * t * t);
            printf("Case %d: %.3f %.3f\n", c, s, t);
        }
        else if(n == 3)
        {
            scanf("%f %f %f", &u, &a, &s);
            v = (u * u) + (2 * a * s);
            v = sqrt(v);
            t = (v - u) / a;
            printf("Case %d: %.3f %.3f\n", c, v, t);
        }
        else if(n == 4)
        {
            scanf("%f %f %f", &v, &a, &s);
            u = (v * v) - (2 * a * s);
            u = sqrt(u);
            t = (v - u) / a;
            printf("Case %d: %.3f %.3f\n", c, u, t);
        }
        ++c;
    }

    return 0;
}
