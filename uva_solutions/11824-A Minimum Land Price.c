#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, j, len;
    double sum, arr[100000], temp, k;
    scanf("%d", &t);
    while(t--)
    {
        i = 0;
        sum = 0;
        while((scanf("%lf", &arr[i])) && (arr[i] != 0))
            ++i;

        len = i - 1;
        for(i = 0; i < len; ++i){
        	for(j = 0; j < len-i; ++j){
            	if(arr[j] < arr[j+1]){
                	temp =  arr[j];
                	arr[j] = arr[j+1];
                	arr[j+1] = temp;
            	}
            }
        }
        ++len;
        for(i = 0, k = 1; i < len; ++i, ++k)
        {
            sum += 2 * pow(arr[i], k);
        }
        if(sum <= 5000000)
            printf("%0.lf\n", sum);
        else
            printf("Too expensive\n");
    }
    return 0;
}
