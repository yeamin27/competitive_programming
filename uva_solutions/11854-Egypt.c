#include<stdio.h>
int main()
{
    int x, y, z, t;
    while(scanf("%d %d %d", &x, &y, &z) && x != 0 && y != 0 && z != 0)
    {
        if(x < y){
            x = x + y;
            y = x - y;
            x = x - y;
        }
        if(x<z){
            x = x + z;
            z = x - z;
            x = x - z;
        }
        if(x * x == ((y * y) + (z * z)))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
