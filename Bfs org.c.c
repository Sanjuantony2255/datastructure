#include<stdio.h>
void bfs(int);
int graph[10][10],visted[10],total;
int main()
{
	int j,i;
	printf("Enter the vertex:");
	scanf("%d",&total);
	printf("Enter the no adjacency matrix:");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
					}
			}
			for(i=0;i<total;i++)
			{
				visted[i]=0;
			}
			printf("bfstravesal are:");
			bfs(0);
			return 0;
		}
		void bfs(int vertex)
		{
			int j;
			printf("%d",vertex);
			visted[vertex]=1;
			for(j=0;j<total;j++)
			{
				if(!visted[j]&&graph[vertex][j])
				{
					bfs(j);
				}
			}
		}

