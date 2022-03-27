#include <stdio.h>
#define N 10
int main()
{
	int i, p, q, t;
	int a[N];
	for (i = 0; i < N; i++) 
	a[i] = i;
	while((scanf("%d,%d", &p, &q)))
	{
		if(a[p] == a[q])	continue;
		for(i = 0; i < N; i++)
		{
			t = a[p];
			if(t == a[i])
			{
				a[i] = a[q];
			}
		}
		for(i = 0; i < N; i++)
			printf("%d ",a[i]);	
	}
	
}