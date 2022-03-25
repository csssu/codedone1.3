#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		
		printf("%d\n", n);
		
		for(int j = 1; j <= n; j++)
		{
			printf("%d%s", j, (j == n ? "" : " "));
		}
		
		printf("\n");
	}
	
  return(0);
}