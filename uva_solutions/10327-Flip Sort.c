#include <stdio.h>
int main()
{
    int n, arr[1000], i, j, temp, f;
    while (scanf("%d", &n) != EOF){
        f = 0;
        for(i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        for(i = 0; i < n - 1; ++i){
        	for(j = 0; j < n-i-1; ++j){
            	if(arr[j] > arr[j+1]){
                	temp =  arr[j];
                	arr[j] = arr[j+1];
                	arr[j+1] = temp;
                	++f;
            	}
            }
        }
        printf("Minimum exchange operations : %d\n",f);
    }
    return 0;
}
