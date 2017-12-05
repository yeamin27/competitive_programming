#include<stdio.h>
int main()
{
    int t, salary[3], i, j, c, temp;
    scanf("%d", &t);
    for(c = 1; c <= t; ++c)
    {
        scanf("%d %d %d", &salary[0], &salary[1], &salary[2]);
        for(i = 0; i < 3 - 1; ++i){
        	for(j = 0; j < 3-i-1; ++j){
            	if(salary[j] > salary[j+1]){
                	temp =  salary[j];
                	salary[j] = salary[j+1];
                	salary[j+1] = temp;
            	}
            }
        }
        printf("Case %d: %d\n", c, salary[1]);
    }
    return 0;
}
